#include <stdio.h> //To print the sentence
int main(){
    char myword[100];
    printf("Enter your name:");
    scanf("%[^\n]",myword);
    printf("Complete word is %s",myword);
    return 0;
}