#include<stdio.h>

int main(){
    int number;
    printf("Please Enter number :> ");
    scanf("%d",&number);
    if(number>99 && number<1000){
        printf("Yeah!, a Three Digit Number.");
    }else{
        printf("Sorry!, Not Sure.");
    }

    return 0;
}