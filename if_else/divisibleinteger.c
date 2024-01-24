#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0)
    {
        printf("it is divisible by 3");
    }
    else{
        printf("it is divisible by 5");
    }
    return 0;
}