//A program to find factorial of a number.

#include <stdio.h>

int main()
{
    long unsigned int fact=1;
    int i,num;
    printf("Enter a number:- ");
    scanf("%d",&num);
    for(i=num;i>1;--i)
    {
        fact=fact*i;
    }
    printf("\nFactorial of %d = %lu",num,fact);
    return 0;
}
