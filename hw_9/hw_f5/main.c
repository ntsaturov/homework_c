#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE 1024
#define MAX_NUMS 200

int find_max_array(int size, int a[]) {
    int max_value = -10000;
    int i = 0;
    while (i < size) {
        if (a[i] > max_value) max_value = a[i];
        i++;
    }
    return max_value;
}

int main() 
{
    char line[MAX_LINE];
    fgets(line, sizeof(line), stdin);
    int numbers[MAX_NUMS];
    int i = 0;
    int count = 0;

    char* token = strtok(line, " ");

    while (token != NULL) {
        numbers[count] = atoi(token); 
        count++;
        token = strtok(NULL, " ");
    }

    int max = find_max_array(count, numbers);
    printf("%d\n", max);
    return 0;
}
