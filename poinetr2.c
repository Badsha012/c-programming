#include<stdio.h>
int main()
{
    int a,b,sum;
    int *p=&a,*q=&b,*r=&sum;
    *p=46;
    *q=43;
    *r=*p+*q;
    printf("the summation=%d\n",*r);
    return 0;
}