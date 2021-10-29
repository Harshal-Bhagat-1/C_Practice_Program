// Multiplication of two number without using * symbol.

#include <stdio.h>

int main()
{
    int a,b,i;
    int sum=0;
    printf("Enter value of A and B:- ");
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++){
        sum=sum+a;
    }
    printf("\nMultiplication of %d * %d = %d",a,b,sum);
    return 0;
}
