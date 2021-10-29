#include<stdio.h>

int main()
{
   int num,rem;
   
   printf("\nEnter a number:- ");
   scanf("%d",&num);
   
   rem = num%2;
   
   if(rem==0){
       printf("\nNumber %d is Even",num);
   }
   else{
       printf("\nNumber %d is Odd",num);
   }
   
}
