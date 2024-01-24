#include<stdio.h>
int main(int argc, char const *argv[])
{
    float radius;
    printf("Enter radius : ");
    scanf("%f",&radius);
    float pi = 3.1415;
    float area = pi * radius * radius;
    printf("the area of circle is: %f",area);

    return 0;
}
