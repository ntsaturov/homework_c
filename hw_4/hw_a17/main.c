#include <stdio.h>

int main() 
{   
    int a;
    scanf("%d", &a);
    if (a == 12 || a < 3) printf("winter\n");
    else if (a > 3 && a < 6) printf("spring\n");
    else if (a > 5 && a < 9) printf("summer\n");
    else if (a > 8 && a < 12) printf("autumn\n");
    return 0;
}
