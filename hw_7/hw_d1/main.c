#include <stdio.h>

int recursion_print(int num, int counter) {
    if (counter == num) {
        printf("%d\n", num);
        return 0;
    }
    printf("%d ", counter);
    return recursion_print(num, counter + 1);
}

int main() 
{   
    int num;
    scanf("%d", &num);
    recursion_print(num, 1);
}
