#include<stdio.h>
int main()
{
 int num=5,r,c;
 char ch;
 for(r=1; r<=num; r++)
 {
  if(r==2 || r==4)
  {
   ch='A';
   for(c=1; c<=r; c++,ch++)
     printf("%c",ch);
  }
  else
  {
   for(c=1; c<=r; c++)
     printf("%d",c);
  }
  printf("\n");
 }
 return 0;
}