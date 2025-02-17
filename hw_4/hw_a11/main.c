#include <stdio.h>

int main() 
{   
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int arr[] = {a, b, c, d, e};
    int i = 0;
    int result_min = a;
    int result_max = 0;
    while (i < 5)
    {
        if (arr[i] < result_min) result_min = arr[i];
        if (arr[i] > result_max) result_max = arr[i];
        i++;
    }
    printf("%d\n", result_min + result_max);
}
