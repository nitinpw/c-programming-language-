#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
     printf("Enter the age of ram : ");
     scanf("%d",&ram);
            printf("Enter the age of shyam : ");
    scanf("%d",&shyam);
            printf("Enter the age of ajay : ");
    scanf("%d",&ajay);
            if(ram>shyam){
              if(ram>ajay)
        printf("ram is youngest : %d",ram);
        else
        printf("ajay is yougest : %d",ajay);
    }
    else
        if(shyam>ram){
            if(shyam>ajay)
            printf("shyam is youngest : %d",shyam);
                else
                printf("ajay is yougest : %d",ajay);
        }

    return 0;
}