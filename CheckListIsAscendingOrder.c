// Check list of elements is in ascending order.

#include <stdio.h>

int main()
{
    int a[5];
    int i,n,p;
    
    for(i=0;i<5;i++)
    {
        printf("Enter %d Element:- ",i+1);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++)
    {
        if(a[i]>a[i+1])
        {
            printf("Element %d is not in order",a[i+1]);
        }
    }
}
