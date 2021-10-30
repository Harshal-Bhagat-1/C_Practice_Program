//Sort the list uisng selection sort.

#include <stdio.h>
#include<stdlib.h>
#define N 10
int main ()
{
  int a[N],i,j,t,min,loc;
  
  printf("Random Generated List:- \n");
  for(i=0;i<N;i++)
  {
      //random number generated
      a[i]=rand()%100;
      printf("%d\t",a[i]);
  }
  
  for(i=0;i<N;i++)
  {
      min=a[i];
      loc=i;
      for(j=i+1;j<N;j++)
      {
          if(a[j]<min)
          {
              min=a[j];
              loc=j;
          }
      }
      if(a[loc]<a[i])
      {
          t=a[i];
          a[i]=a[loc];
          a[loc]=t;
      }
  }
  printf("\n\nAfter sorting, List contain\n");
  for(i=0;i<N;i++)
  {
      printf("%d\t",a[i]);
  }

}
