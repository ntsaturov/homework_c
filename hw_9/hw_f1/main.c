#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024
#define MAX_NUMS 100

void sort_array(int size, int a[]) {
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }

    int m = 0;
    while (m < size) {
        printf("%d ", a[m]);
        m++;
    }
    printf("\n");
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

    sort_array(count, numbers);
    return 0;
}
