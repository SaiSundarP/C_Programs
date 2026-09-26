#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>

#define port 8888  
/*
1. create a socket
2. bind the socket
3. send or receive data
4. close the fd
*/
int main(){
    struct sockaddr_in serv_addr;
    struct sockaddr_in client_addr;

    int sockfd = socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
    const char *msg = "HELLO MSG FROM SERVER";
    
    char client_msg[128];
    socklen_t client_len = sizeof(client_addr);
    ssize_t received;

    if(sockfd==-1){
        perror("Socket Creation Failed!");
        exit(1);
    }
    memset(&serv_addr,0,sizeof(serv_addr));

    serv_addr.sin_family= AF_INET;
    serv_addr.sin_port=htons(port);
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if(bind(sockfd,(struct sockaddr*)& serv_addr,sizeof(serv_addr))==-1){
        perror("Cannot bind the socket to the address!");
        close(sockfd);
        exit(1);
    }

    printf("Waiting for a client on port %d...\n", port);
    // recvfrom records the client's real source address for the reply.
    received = recvfrom(sockfd, client_msg, sizeof(client_msg) - 1, 0,(struct sockaddr *)&client_addr, &client_len);
    
    if(received == -1){
        perror("Could not receive client message");
        close(sockfd);
        exit(1);
    }
    client_msg[received] = '\0';
    printf("Message from Client: %s\n", client_msg);

    // Reply to the sender instead of sending to the server's wildcard address.
    if(sendto(sockfd, msg, strlen(msg), 0,(const struct sockaddr *)&client_addr, client_len) == -1){
        perror("Message not sent!");
        close(sockfd);
        exit(1);
    }
    printf("Message sent...\n");
    close(sockfd);

}