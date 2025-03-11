#include <stdio.h>

int mod(int a) {
    if (a < 0) return  a * (-1);
    return a;
}

int main() 
{   
    int a;
    scanf("%d", &a);

    printf("%d\n", mod(a));
}
