#include<stdio.h>
int main()
{
    int x;
    printf("Enter year : ");
    scanf("%d",&x);
    if(x%4==0)
    {
        printf("it is a leap year");
    }
    else{
        printf("it is a not leap year");
    }
    return 0;
}