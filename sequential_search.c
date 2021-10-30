// Sequential Search

#include <stdio.h>

int main()
{
    int a[10]={12,34,22,55,11,67,65,89,76,20};
    int i,k,p,flag=0;
    printf("Array Elements are:- ");
    for(i=0;i<10;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nEnter the item to be search in array:- ");
    scanf("%d",&k);
    for(i=0;i<10;i++)
    {
        if(a[i]==k)
        {
            p=i;
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("\nItem %d is found at position %d",k,p+1);
    }
    else
    {
        printf("\nItem %d is Not found",k);
    }
}
