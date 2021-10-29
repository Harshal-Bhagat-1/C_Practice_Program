//Print Prime numbers between 1 to 100.

#include<stdio.h>
int main()
{
   int i,num,count;
   printf("Prime Numbers between 1 to 100:- \n");
   
   for(num=1;num<=100;num++){
       count=0;
       //check number is prime or not
       for(i=2;i<=num/2;i++){
           if(num%i==0){
               count++;
               break;
           }
           
       }
       if(count==0 && num!=1){
            printf("%d \t",num);
       }
   }
   return 0;
}
