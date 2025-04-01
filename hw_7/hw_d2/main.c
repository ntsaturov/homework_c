#include <stdio.h>

int recursion_print(int num, int counter, int result) {
    if (counter == num) {
        printf("%d\n", result + num);
        return 0;
    }
    return recursion_print(num, counter + 1, result + counter);
}

int main() 
{   
    int num;
    scanf("%d", &num);
    recursion_print(num, 1, 0);
}
