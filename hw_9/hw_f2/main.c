#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024
#define MAX_NUMS 100

void sort_even_odd(int n, int a[]) {
    int tmp[n];
    int i = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            tmp[i++] = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            tmp[i++] = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        a[i] = tmp[i];
    }
}

int main() 
{
    char line[MAX_LINE];
    int numbers[MAX_NUMS];
    fgets(line, sizeof(line), stdin);
    char* token = strtok(line, " ");
    int count = 0;

    while (token != NULL) {
        numbers[count] = atoi(token); 
        count++;
        token = strtok(NULL, " ");
    }

    sort_even_odd(count, numbers);
    return 0;
}
