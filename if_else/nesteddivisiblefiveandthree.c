#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){
            printf("the Number is divisible by 5 and 3");
        }
        else{
            printf("the Number is not divisible by 5 and 3");
        }
    }
    return 0;
}