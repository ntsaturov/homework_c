#include <stdio.h>
#include <string.h>  

void recursion_print(char* num, int counter) {
    if (counter == 0) {
        printf("%c\n", num[counter]);
        return;
    }

    printf("%c ", num[counter]);

    return recursion_print(num, counter - 1);
}

int main() 
{   
    int num;
    char str[20]; 
    scanf("%d", &num);
    sprintf(str, "%d", num);
    int digit_count = strlen(str);
    recursion_print(str, digit_count - 1);
}


