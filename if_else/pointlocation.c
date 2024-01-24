#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates : ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("The piomt lies on origin");
    }
    else if (x==0){
        printf("Lies on y-axis");
    }
    else if(y==0){
        printf("Lies on x-axies");
    }
    else{
        printf("the point does not lies on x and y axies");
    }
    return 0;
}