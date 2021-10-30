//Binary Search.

#include <stdio.h>
#define n 10
int main()
{
    int a[n]={1,2,3,4,5,6,7,8,9,10};
    int i,p,k,b,c,d;
    
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the item to be search in array of list:- ");
    scanf("%d",&k);
    
    b=0;
    c=n-1;
    d=n/2;
     while(b<c && a[d]!=k)
     {
         if(a[d]<k)
            b=d+1;
        else
            c=d-1;
        d=(b+c)/2;
     }
     if(a[d]!=k)
        printf("\nItem %d is not found in the list",k);
    else
        printf("\nItem %d is found at position %d",k,d+1);
}
