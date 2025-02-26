#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

int main() 
{   
    int a;
    int i = 0;
    char str[20]; 
    scanf("%d", &a);
    sprintf(str, "%d", a);
    int sum = 0;
    while (i < strlen(str)) 
    {
        sum = sum + ((int)str[i] - 48);
        i++;
    }

    printf("%d\n", sum);
    
    return 0;
}
