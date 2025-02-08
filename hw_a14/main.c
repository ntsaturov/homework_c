#include <stdio.h>

int main() 
{   
    char a[3];
    scanf("%s", a);
    int i = 0;
    int result = 0;
    while (i < 3) {
        if (result <  a[i] - '0') result = a[i] - '0';
        i ++;
    }
    printf("%d\n", result);
    return 0;
}
