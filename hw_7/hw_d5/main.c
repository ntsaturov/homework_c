#include <stdio.h>

void to_bin_num(int n) {
    if (n > 1) {
        to_bin_num(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int number;
    scanf("%d", &number);
    to_bin_num(number);
    printf("\n");
}