#include <stdio.h>

int main() 
{   
    int numbers[10];
    int sum = 0;

    int i = 0;
    while (i < 10) {
        scanf("%d", &numbers[i]);
        if (numbers[i] > 0) sum += numbers[i];
        i++;
    }

    printf("%d \n", sum);

    return 0;
}