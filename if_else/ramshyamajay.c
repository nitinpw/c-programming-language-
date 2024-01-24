#include<stdio.h>
int main()
{
    int ram;
    printf("Enter the age of ram : ");
    scanf("%d",&ram);
    int shyam;
     printf("Enter the age of shyam : ");
    scanf("%d",&shyam);
    int ajay;
     printf("Enter the age of ajay : ");
    scanf("%d",&ajay);
    if(ram>shyam && ram>ajay){
        printf("youngest is ram");
    }
    if(shyam>ram && shyam>ajay){
        printf("youngest is shyam");
    }
    if(ajay>ram && ajay>shyam){
        printf("youngest is ajay");
    }
    return 0;
}