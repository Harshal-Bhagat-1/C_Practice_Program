// Pyramid Program.

#include <stdio.h>

int main()
{
    int i,j,k,num;
    printf("Enter a limit:- ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(k=1;k<=num-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%2d",j);
        }
        printf("\n");
    }
}
