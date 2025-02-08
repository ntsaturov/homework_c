#include <stdio.h>

int main() 
{   
    int a, b, c;
    int d;
    scanf("%d %d %d", &a, &b, &c);
    d = a;
    if (a < b) d = b;
    if (b < c && c > d) d = c;
    printf("%d\n", d);
}
