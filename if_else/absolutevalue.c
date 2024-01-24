#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x<0){
        x = x * (-1);
    }
    printf("the absoute value of : %d",x);

    return 0;
}