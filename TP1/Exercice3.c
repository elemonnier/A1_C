#include <stdio.h>
#include <stdlib.h>

int main ()
{
        char c1;
        char c2;

        printf("Entrez deux caractères > ");
        scanf("%c%c", &c1, &c2);

        if (c1 > c2)
                printf("1\n");

        else
                printf("0\n");

        return EXIT_SUCCESS;
}
