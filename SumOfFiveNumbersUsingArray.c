// Sum of five numbers uisng Array

#include <stdio.h>

int main()
{
    int a[5],i,sum=0;
    
    for(i=0;i<5;i++)
    {
        printf("Enter %d Number:- ",i+1);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("\nSum = %d",sum);
}
