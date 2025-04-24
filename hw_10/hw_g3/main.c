#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() 
{
    FILE *infile, *outfile;
    char str[1024];
    infile = fopen("input.txt", "r");

    fgets(str, sizeof(str), infile);
    str[strcspn(str, "\n")] = '\0';
    fclose(infile);

    int len = strlen(str);
    int i = 0;
    outfile = fopen("output.txt", "w");
    while (i < len - 1) {
        if (str[i] == str[len - 1]) fprintf(outfile, "%d ", i);
        i++;
    }

    fclose(outfile);

    return 0;
}