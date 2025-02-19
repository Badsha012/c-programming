#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double PI=3.14159,tri,sqe,ret,tra,ci;
    sqe=PI*c*c;
    tri=0.5*a*c;
    ret=a*b;
    tra=b*b;
    ci=(a+b)/2 *c;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",sqe);
    printf("TRAPEZIO: %.3lf\n",ci);
    printf("QUADRADO: %.3lf\n",tra);
    printf("RETANGULO: %.3lf\n",ret);
    return 0;
}
/*TRIANGULO: 7.800
CIRCULO: 84.949
TRAPEZIO: 18.200
QUADRADO: 16.000
RETANGULO: 12.000TRIANGULO: 7.800
CIRCULO: 84.949
TRAPEZIO: 18.200
QUADRADO: 16.000
RETANGULO: 12.000*/