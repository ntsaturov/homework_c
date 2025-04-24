#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
    FILE *infile, *outfile;
    char str[1024];
    infile = fopen("input.txt", "r");

    fgets(str, sizeof(str), infile);
    str[strcspn(str, "\n")] = '\0';
    fclose(infile);

    outfile = fopen("output.txt", "w");

    int i = 0;
    while (i < strlen(str)) {
        if (str[i] == 'a') str[i] = 'b';
        else if (str[i] == 'b') str[i] = 'a';
        else if (str[i] == 'A') str[i] = 'B';
        else if (str[i] == 'B') str[i] = 'A';
        fprintf(outfile, "%c", str[i]);
        i++;
    }

    fclose(outfile);

    return 0;
}