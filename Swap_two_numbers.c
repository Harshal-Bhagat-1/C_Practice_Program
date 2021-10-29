#include<stdio.h>

int main()
{
    int a,b,t;
    
    printf("Enter two Numbers:- ");
    scanf("%d %d",&a,&b);
    printf("\nBefore Swap: A = %d and B = %d",a,b);
    
    t=a;
    a=b;
    b=t;
    
    printf("\nAfter Swap: A = %d and B = %d",a,b);
}
