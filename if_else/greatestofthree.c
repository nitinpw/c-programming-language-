#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int b;
    printf("Enter b number : ");
    scanf("%d",&b);
    int c;
    printf("Enter c number : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is greatest",a);
    }
    if(b>a && b>c){
        printf("%d is greatest",b);
    }
    if(c>a && c>b){
        printf("%d is greatest",c);
    }
    return 0;
}