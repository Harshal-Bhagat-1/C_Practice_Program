//Generate Random Number in the range of 1 to 50.

#include <stdio.h>
#include<stdlib.h>
#define N 10
int main ()
{
  int a[50],i;
  
  for(i=0;i<50;i++)
  {
      a[i]=rand()%100;
      printf("%d\t",a[i]);
  }

}
