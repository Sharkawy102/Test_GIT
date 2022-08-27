#include <stdio.h>
#include <stdlib.h>
#include "aa.h"
int main()
{
    int x,y, sum_values ,div_values;
    x=50;
    y = 0;
    sum_values = sum_V(x,y);
    div_values = Div_v(x,y);
    printf("sum of %d and %d = %d",x, y,sum_values);
    if(Div_v(x,y)==-1)
        printf("can't print /0");
    else
        printf("div of %d and %d = %d",x, y,div_values);
    return 0;
}
