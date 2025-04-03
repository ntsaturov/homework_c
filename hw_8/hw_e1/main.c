#include <stdio.h>

int main() 
{   
    float numbers[5];
    float result = 0.0;
    float average;

    int i = 0;
    while (i < 5) {
        scanf("%f", &numbers[i]);
        result += numbers[i];
        i++;
    }

    printf("%.3f\n", result / 5);

    return 0;
}
