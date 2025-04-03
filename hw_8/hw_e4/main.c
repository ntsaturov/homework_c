#include <stdio.h>

int main() 
{   
    int numbers[10];
    int max = 0;
    int less_max = 0;

    int i = 0;
    while (i < 10) {
        scanf("%d", &numbers[i]);
        if (i == 0) {
            max = numbers[i];
            // less_max = numbers[i];
        }
        else {
            if (max < numbers[i]) {
                less_max = max;
                max = numbers[i];
            } else if (less_max < numbers[i])
            {
                less_max = numbers[i];
            }
        }
        i++;
    }

    printf("%d \n", max + less_max);

    return 0;
}