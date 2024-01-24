#include<stdio.h>
int main ()
{
    int x;
    printf("Enter Number : ");
    scanf("%d",&x);
    if(x%5==0)
    {
        printf("Divisiable by 5");
    }
    else
    {
        printf("not divisiable by 5");
    }
    return 0;
}