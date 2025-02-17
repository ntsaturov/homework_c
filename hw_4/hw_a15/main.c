#include <stdio.h>

int main() 
{   
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double k = (y1 - y2)/(x1 - x2);
    double b = (y1 - k * x1);
    printf("%.2f %.2f\n", k, b);
    return 0;
}
