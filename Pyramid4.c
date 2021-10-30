// Pyramid Program.

#include <stdio.h>

int main()
{
    int i,j,k,num;
    printf("Enter a limit:- ");
    scanf("%d",&num);
    for(i=1;i<=num;++i)
    {
        printf("\n\t");
        
        for(k=1;k<=num-i;++k)
        {
            printf(" ");
        }
        for(j=1;j<=i;++j)
        {
            printf("%d",j);
        }
        for(j=i-1;j>0;--j)
        {
            printf("%d",j);
        }
    }
}
