#include <stdio.h>
#include<string.h>
char ns[10];

void distinctChar(char *s){
    int seen[]={};
    for(int i=0;i<strlen(s);i++){
        if(!seen[s[i]-'A']){
            seen[s[i]-'A']++;
            ns[i]=s[i];
        }
    }
}

int main() {
    char s[]="CAREER";
    char freq[26]={};
    for(int i=0;i<strlen(s);i++) 
        freq[s[i]-'A']++;
    distinctChar(s);
    printf("%s",ns);
    for(int i=0;i<strlen(s);i++)
        printf("\n%c-%d",s[i],freq[s[i]-'A']);    
}