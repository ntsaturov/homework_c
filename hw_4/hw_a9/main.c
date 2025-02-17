#include <stdio.h>

int main() 
{   
    int a, b, c, d, e;
    int result = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int arr[] = {a, b, c, d, e};
    int i = 0;
    while (i < 5)
    {
        if (arr[i] > result) result = arr[i];
        i++;
    }
    printf("%d\n", result);
}
