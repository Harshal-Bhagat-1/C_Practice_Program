// Fibonacci Sequences.

#include <stdio.h>

int main()
{
    int i,fabo,num;
    int n1=0,n2=1;
    
    printf("Enter a Number:- ");
    scanf("%d",&num);
    printf("\n%d \n%d",n1,n2);
    
    for(i=1;i<=num;i++){
        
        fabo=n1+n2;
        printf("\n%d",fabo);
        n1=n2;
        n2=fabo;
        
    }
}
