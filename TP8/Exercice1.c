#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lowerCase(char* string, int n)
{
    for (int counter = 0; counter < n; counter++)
    {
        if (string[counter] >= 65 && string[counter] <= 90)
        {
            string[counter] = string[counter] + 32;
        }
    }
}

void upperCase(char* string, int n)
{
    for (int counter = 0; counter < n; counter++)
    {
        if (string[counter] >= 97 && string[counter] <= 122)
        {
            string[counter] = string[counter] - 32;
        }
    }
}

int main(int argc, char** argv) {
    if (argc == 2)
    {
        char *string = argv[1];
        char *stringMin = (char *) malloc((strlen(string) + 1) * sizeof(char));
        char *stringMax = (char *) malloc((strlen(string) + 1) * sizeof(char));

        strcpy(stringMin, string);
        strcpy(stringMax, string);

        lowerCase(stringMin, strlen(string));
        upperCase(stringMax, strlen(string));

        printf("%s\n%s\n%s\n", string, stringMin, stringMax);

        free(stringMin);
        free(stringMax);

    }
    else
    {
        printf("Your declaration is not correct !");
    }
    return 0;

}
