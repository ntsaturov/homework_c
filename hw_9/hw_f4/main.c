#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

void print_digit(char s[]) {
    int numbers[MAX_NUMS];
    int i = 0;
    int count = 0;

    while (i < strlen(s)) {
        if (isdigit(s[i])) {
            numbers[count] = s[i] - '0';
            count++;
        }
        i++;
    }
    sort_array(count, numbers);
}

int main() 
{
    char line[MAX_LINE];
    fgets(line, sizeof(line), stdin);
    print_digit(line);
    return 0;
}
