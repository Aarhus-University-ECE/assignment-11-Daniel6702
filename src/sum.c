#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  assert(n>=0);
   if (n<1) {
    return total;
   }
  return sumtail(n-1,total+n);
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  assert (n >= 1);
  int sum = 0;
  int counter = 0;
  while (counter<n) {
    sum += n-counter;
    counter++;
  }
  return sum;
}