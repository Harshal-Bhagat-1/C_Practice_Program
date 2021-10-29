// Check a number whether it is positive or negetive or zero

#include<stdio.h>
int main()
{
   int num;
   
   printf("\nEnter a number:- ");
   scanf("%d",&num);
   
   if(num>0){
       printf("\nNumber %d is Positive",num);
   }
   else if(num<0){
       printf("\nNumber %d is Negative",num);
   }
   else{
       printf("\nNumber is Zero");
   }   
}
