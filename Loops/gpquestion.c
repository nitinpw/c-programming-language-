#include<stdio.h>
int main()
{
    int n;
    printf("Enter a gp number : ");
    scanf("%d",&n);
    int a = 3;
    for(int i=3;i<=n;i=i+3){
        printf("%d ",a);
        a = a*4;
    }

    return 0;

}