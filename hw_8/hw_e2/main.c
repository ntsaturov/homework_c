#include <stdio.h>

int main() 
{   
    int numbers[5];
    int result = 0;
    float average;

    int i = 0;
    while (i < 5) {
        scanf("%d", &numbers[i]);
        if (i == 0) result = numbers[i];
        else {
            if (result > numbers[i]) result = numbers[i];
        }
        i++;
    }

    printf("%d\n", result);

    return 0;
}
