#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("Enter 1st number : ");
    scanf("%d",&a);
     printf("Enter 2st number : ");
    scanf("%d",&b);
      printf("Enter 3st number : ");
    scanf("%d",&c);
      printf("Enter 4st number : ");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("the is greatest a");
    }
    if(b>a && b>c && b>d){
        printf("the is greatest b");
    }if(c>a && c>b && c>d){
        printf("the is greatest c");
    }
    if(d>a && d>b && d>c){
        printf("the is greatest d");
    }
    return 0;
}