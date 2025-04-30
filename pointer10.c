#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    float avg;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    printf("the sum=%d\n",sum);
    avg=sum/5;
    printf("the number number is=%f\n",avg);
    return 0  ;
    
}