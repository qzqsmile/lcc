#include<stdio.h>
#include"c.h"

int Aflag;		/* >= 0 if -A specified */
Interface *IR = NULL;


int main(void)
{
    int *p;
    NEW(p, 0);
    *p = 1;
    printf("hello world! %s\n", stringd(10));
    return 0;
}