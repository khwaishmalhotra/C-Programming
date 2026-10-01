#include <stdio.h> //To access the number
int main(){
    int mynumbers[10];
    //mynumbers[0]=45;
    //mynumbers[1]=16;
   // printf("%d",mynumbers[1]);
    //return 0;
    for(int i=0;i<=9;i++){
        printf("Enter %d value \n",i+1);
        scanf("%d",&mynumbers[i]);
    
    
    }
    for(int i=0;i<=9;i++){ 
        printf("The value is  %d value \n",mynumbers[i]);
        
}
}