#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() 
{
    FILE *infile, *outfile;
    char str[1024];
    infile = fopen("./input.txt", "r");

    fgets(str, sizeof(str), infile);
    fclose(infile);
    int number = atoi(str);

    int i = 2;
    char buff[1024];
    int start = 65;
    int start_num = 2;
    outfile = fopen("output.txt", "w");
    while(i < number) {
        fprintf(outfile, "%c%d", (char)start, start_num);
        start++;
        start_num += 2;
        if (start_num > 8) start_num = 2;
        i += 2;
    }
    fprintf(outfile, "%c%d", (char)start, start_num);
   
    fclose(infile);
    return 0;
}