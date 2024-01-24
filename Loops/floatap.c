#include<stdio.h>
int main()
{
    float n;
    printf("Enter the number : ");
    scanf("%f",&n);
    float a = 100;
    for(int i=100;i<=n;i++){
        printf("%f ",a);
        a =  a/2;
    }
    return 0;
}