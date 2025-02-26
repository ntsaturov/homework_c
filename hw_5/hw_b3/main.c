#include <stdio.h>

int main() 
{   
    int a, b;
    scanf("%d %d", &a, &b);
    int i = a;
    int sum = 0;
    while (i < b)
    {
        sum = sum + i * i;
        i++;
    }
    printf("%d\n",  sum + b * b);
}
