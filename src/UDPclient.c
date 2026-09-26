#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>

#define port 8888
#define server "127.0.0.1"

int main(){
    struct sockaddr_in server_addr;
    struct sockaddr_in reply_addr;
    int sockfd=socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);

    char buf[128];
    const char *request = "HELLO FROM CLIENT";
    socklen_t reply_len = sizeof(reply_addr);
    ssize_t received;

    if(sockfd==-1){
        perror("Cannot Create!");
        exit(1);
    }

    memset(&server_addr,0,sizeof(server_addr));
    server_addr.sin_family=AF_INET;
    server_addr.sin_port=htons(port);

    if (inet_aton(server , &server_addr.sin_addr) == 0)
    {
		fprintf(stderr, "inet_aton() failed\n");
		close(sockfd);
		exit(1);
	}

    // Leave the client unbound so the OS assigns a free source port.
    if(sendto(sockfd, request, strlen(request), 0,
              (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1){
        perror("Could not send request");
        close(sockfd);
        exit(1);
    }

    printf("Waiting for server reply...\n");
    // Use the received byte count to terminate the reply safely as a string.
    received = recvfrom(sockfd, buf, sizeof(buf) - 1, 0,
                        (struct sockaddr *)&reply_addr, &reply_len);
    if(received == -1){
        perror("Message not received");
        close(sockfd);
        exit(1);
    }
    buf[received] = '\0';
    printf("Messgage from Server: %s\n",buf);
    close(sockfd);

}