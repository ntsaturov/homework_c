#include <stdio.h>

int f(int x) {
    if (x < 2 && x >= -2) return x * x;
    else if (x >= 2) return x*x+4*x+5;
    else if (x < -2) return 4;
    return 0;
}


int main() 
{   
    int num;

    int result = 0;
    while (scanf("%d", &num) == 1) {
        if (num == 0) {
            break;
        }

        if (result < f(num)) result = f(num);
    }

    printf("%d\n", result);
}
