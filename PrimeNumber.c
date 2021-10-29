// Check Number is prime or not.
#include<stdio.h>
int main()
{
    int number,rem,i;
    printf("Enter a Number:- ");
    scanf("%d",&number);
    
    for(i=2;i<number;i++)
    {
        rem=number%i;
        if(rem == 0){
            break;
        }
    }
    if(i==0 || rem!=0){
            printf("\nNumber %d is prime",number);
        }
        else{
            printf("\nNumber %d is not prime",number);
        }
    
}
