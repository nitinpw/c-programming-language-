#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d",a);
            a=a/2;
        }
        printf("\n");
    }
    return 0;
}