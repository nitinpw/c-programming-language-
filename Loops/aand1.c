#include<stdio.h>
int main(){
    int n,ch,i,j;
    printf("enter a number : ",n);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if (i==2 || i==4)
        {
            ch='A';
            for(j=1;j<=i;j++,ch++)
            printf("%c",ch);
        }
        else{
            for(j=1;j<=i;j++)
            printf("%d",j);
        }
        printf("\n");
    }
return 0;
}