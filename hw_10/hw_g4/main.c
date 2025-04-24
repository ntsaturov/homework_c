#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char* remove_all_duplicates(const char *str) {
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];
        freq[ch]++;
    }

    char *result = (char*)malloc(strlen(str) + 1);

    int write_index = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];
        if (freq[ch] == 1) {
            result[write_index++] = str[i];
        }
    }

    result[write_index] = '\0';
    return result;
}


int main() 
{
    FILE *infile, *outfile;
    char str[1024];
    infile = fopen("input.txt", "r");

    fgets(str, sizeof(str), infile);
    str[strcspn(str, "\n")] = '\0';
    fclose(infile);

    char* first_string = remove_all_duplicates(strtok(str, " "));

    char* next_string = remove_all_duplicates(strtok(NULL, " "));

    int i, j = 0;
    int counter = 0;
    outfile = fopen("output.txt", "w");
    while (i < strlen(first_string)) {
        while (j < strlen(next_string)) {
            if (first_string[i] == next_string[j]) counter ++;
            j++;
        }
        if (counter == 1) fprintf(outfile, "%c ", first_string[i]);
        counter = 0;
        j = 0;
        i++;
    }

    fclose(outfile);

    return 0;
}