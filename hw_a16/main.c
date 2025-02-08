#include <stdio.h>

int main() 
{   
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[] = {a, b, c};
    int i = 0;
    int tmp = -1;
    while (i < 3)
    {
        if (arr[i] > tmp) {
            tmp = arr[i];
        } else {
            printf("NO\n");
            return 0;
        }
        i++;
    }
    printf("YES\n");
    return 0;
}
