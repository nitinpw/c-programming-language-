//take float input and print the fractional part of the real number.

#include<stdio.h>
int main()
{
    float x;
    printf("Enter the value of float is :  ");
    scanf("%f",&x);
    int y = x;
    float z = x - y;
    printf("the valu of z is : %f",z);
    return 0;
}