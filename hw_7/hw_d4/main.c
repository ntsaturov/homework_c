#include <stdio.h>
#include <string.h> 


void print_num(int num)
{   
    char str[20]; 
    char substr[20];
    sprintf(str, "%d", num);
    strncpy(substr, str + 1, strlen(str));
    if (strlen(str) == 1) {
        printf("%c\n", str[0]);
        return;
    }
    printf("%c ", str[0]);
    if (substr[0] == '0') {
        int i = 0;
        while (i < strlen(substr) - 1)
        {
            if (substr[i] == '0') {
                printf("%c ", '0');
            } else break;
            i++;
        }
        strncpy(substr, str + i, strlen(str));
    }
    sscanf(substr, "%d", &num);
    print_num(num);
}

int main() {
    int num;
    scanf("%d", &num);
    print_num(num);
}