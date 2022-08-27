#include <stdio.h>
#include <stdlib.h>
#include "aa.h"
int main()
{
    int x,y, sum_values=0;
    x=20;
    y = 25;
    sum_values = sum_V(x,y);
    printf("sum of %d and %d = %d",x, y,sum_values);
    return 0;
}
