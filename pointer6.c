// two number quientient number 
#include<stdio.h>
int main()
{
    int x,y,quo;
    int *p=&x,*q=&y,*r=&quo;
    *p=70;
    *q=23;
    *r=*p % *q;
    printf("the quient number=%d\n",*r);
    return 0;
    
}