#include<stdio.h>
int main()
{
    int cp;
    printf("Enter cost Price : ");
    scanf("%d",&cp);
    int sp;
    printf("Enter Selling Price : ");
    scanf("%d",&sp);
    if(sp>cp)
    {
        printf("profit");
    }
    if(cp>sp)
    {
        printf("loss");
    }
    if(sp==cp)
    {
        printf("no profit, no loss");
    }
    return 0;
}
