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
    int tmp = -1;
    while (m < size) {
        int counter = 0;
        int k = 0;
        while (k < size) {
            if (a[m] == a[k]) counter ++;
            k++;
        }

        if (tmp != a[m]) {
            printf("%d %d\n", a[m], counter);
            tmp = a[m];
        } 

        m++;
    }
}

int main() 
{
    char line[MAX_LINE];
    int numbers[MAX_NUMS];
    fgets(line, sizeof(line), stdin);
    int count = 0;

    while (count < strlen(line)) {
        numbers[count] = line[count] - '0';
        count++;
    }

    sort_array(count - 1, numbers);
    return 0;
}
