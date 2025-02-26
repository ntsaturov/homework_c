#include <stdio.h>

int main() 
{   
    int a, b;
    scanf("%d %d", &a, &b);
    int i = a;
    while (i < b)
    {
        printf("%d ",  i * i);
        i++;
    }
    printf("%d\n",  b * b);
}
