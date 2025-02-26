#include <stdio.h>

int main() 
{   
    int a;
    scanf("%d", &a);
    int i = 1;
    while (i < a + 1)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
        i++;
    }
}
