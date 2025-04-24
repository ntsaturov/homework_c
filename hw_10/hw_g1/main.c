#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() 
{
    FILE *infile, *outfile;
    char str[1024];
    infile = fopen("./input.txt", "r");

    fgets(str, sizeof(str), infile);
    str[strcspn(str, "\n")] = '\0';
    fclose(infile);

    int len = strlen(str);
    while (len > 0 && isspace((unsigned char)str[len - 1])) {
        str[--len] = '\0';
    }

    outfile = fopen("output.txt", "w");

    fprintf(outfile, "%s, %s, %s %lu\n", str, str, str, strlen(str));
    fclose(outfile);

    return 0;
}