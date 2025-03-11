#include <stdio.h>

int power(int n, int p) {
    int i = 1;
    int result = 1;
    while (i < p + 1) {
        result = result * n;
        i++;
    }
    return result;
}

int main() 
{   
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", power(a, b));
}
