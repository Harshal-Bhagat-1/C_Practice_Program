//Bubble Sorting
#include <stdio.h>
#define N 10
int main ()
{
  int a[N];
  int i, j, t, size;

  printf ("Enter the limit of array between 1 to %d:-  ", N);
  scanf ("%d", &size);
  if (N < size)
    {
      printf ("\nPlease enter valid no between range of 1 to %d", N);
      return 0;
    }
  for (i = 0; i < size; i++)
    {
      printf ("Enter %d Number:- ", i + 1);
      scanf ("%d", &a[i]);
    }
  //sorting process start from here
  for (i = 0; i < size; i++)
    {
      for (j = 0; j < size - i - 1; j++)
	{
	  if (a[j] > a[j + 1])
	    {
	      t = a[j];
	      a[j] = a[j + 1];
	      a[j + 1] = t;
	    }
	}
    }
  printf ("\nAfter sorting List is:-  ");
  for (i = 0; i < size; i++)
    {
      printf ("%d\t", a[i]);
    }
}
