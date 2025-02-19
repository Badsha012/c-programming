#include<stdio.h>
int fibo(int);
int main()
{
    long long int terms=10,i,n=0;
    for(i=1;i<=terms;i++)
    {
        printf("%lld\n",fibo(n));
        n++;
        
        
    }
    return 0;
}
int fibo(int n)
{
    if(n==0 || n==1)
    return n;

else
    return(fibo(n-1)+fibo(n-2));
}


