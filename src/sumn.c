#include "sumn.h"

#include<stdio.h>

int sumn (int n)
{
    if (n == 0) {
        return 0;
    }
    if (n>0) {
        return (n*2-1) + sumn(n-1);
    }
}
