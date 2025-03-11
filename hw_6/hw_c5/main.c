#include <stdio.h>

int f(int x) {
    int i = 0;
    int result = 0;
    while (i < x + 1) {
        result = i + result;
        i++;
    }
    return result;
}


int main() 
{   
    int num;

    scanf("%d", &num);

    printf("%d\n", f(num));
}
