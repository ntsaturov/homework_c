#include <stdio.h>

int main() 
{   
    double a, b, c;
    double d;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = (a+b+c)/3;
    printf("%.2f\n", d);
    return 0;
}
