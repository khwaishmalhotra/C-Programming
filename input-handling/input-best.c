#include <stdio.h> //Best way to take input in the form of sentence
int main(){
    char myword[100];
    printf("Enter your name:");
    fgets(myword,sizeof(myword),stdin);
    printf("Your name is %s",myword);
    return 0;
}