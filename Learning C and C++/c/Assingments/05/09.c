#include<stdio.h>

int main(){
    int year;
    printf("Please Enter Year (YYYY) :> ");
    scanf("%d",&year);

    if(year%400==0){
        printf("Not a leap Year.");
    }else if (year%100==0)
    {
        printf("Not a leap year.");
    }else if (year%4==0)
    {
        printf("Leap Year.");
    }else{
        printf("Not a Leap Year.");
    }


    return 0;
    
    
}