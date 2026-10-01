#include <stdio.h> //To print two charcters of a sentence
int main(){
    char myword[100];
    printf("Enter your name:");
    scanf("%2[^\n]",&myword);
    printf("Your name is %s",myword);
    return 0;
}