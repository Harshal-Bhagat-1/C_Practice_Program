//print multiplication table of a number

#include<stdio.h>
int main()
{
   int i,num,mul;
   printf("Enter a number:- ");
   scanf("%d",&num);
   for(i=1;i<=10;i++)
   {
       mul=num*i;
       printf("\n%3d * %2d  = %3d",num,i,mul);
   }
   return 0;
}
