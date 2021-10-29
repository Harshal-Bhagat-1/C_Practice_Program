// A program to print number, square and cube of first 10 natural numbers.

#include <stdio.h>

int main()
{
    int i;
    printf("No. Square  Cube");
    for(i=1;i<=10;i++)
    {
        int squ,cube;
        squ=i*i;
        cube=squ*i;
        
        printf("\n%2d %5d %7d",i,squ,cube);
    }
    return 0;
}
