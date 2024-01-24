#include<stdio.h>
int main()
{
    int a;
    printf("Enter 1st side of triangle : ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd side of triangle : ");
    scanf("%d",&b);
    int c;
    printf("Enter 3rd side of triangle : ");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;
}