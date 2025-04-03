#include <stdio.h>

int main() 
{   
    int numbers[10];
    int max_idx = 0;
    int min_idx = 0;
    int max = 0;
    int min = 0;

    int i = 0;
    while (i < 10) {
        scanf("%d", &numbers[i]);
        if (i == 0) { 
            max = numbers[i];
            min = numbers[i];
            max_idx = 1;
            min_idx = 1;
        }
        else {
            if (max < numbers[i]) {
                max = numbers[i];
                max_idx = i + 1;
            } else if (min > numbers[i])
            {
                min = numbers[i];
                min_idx = i + 1;
            }
            
        }
        i++;
    }

    printf("%d %d %d %d\n", max_idx, max, min_idx, min);

    return 0;
}