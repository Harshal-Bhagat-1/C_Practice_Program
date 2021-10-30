// Pyramid Program.

#include <stdio.h>

int main()
{
    int i,j,num;
    char c;
    printf("Enter a limit:- ");
    scanf("%d",&num);
    for(i=1;i<=num;++i)
    {
        c='a';
        for(j=1;j<=i;++j)
        {
            printf("%2c",c);
            ++c;
        }
        printf("\n");
    }
}
