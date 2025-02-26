#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

int main() 
{   
    int a;
    int i;
    char str[20]; 
    scanf("%d", &a);
    sprintf(str, "%d", a);
    int digit_count = strlen(str);
    if (digit_count == 3) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
