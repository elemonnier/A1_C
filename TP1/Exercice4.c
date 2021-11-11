#include <stdio.h>
#include <stdlib.h>

int main ()
{
        int n;

        printf("Entrez un nombre > ");
        scanf("%d", &n);
        if (0==n%2)
                printf("1\n");
        else
                printf("0\n");

        return EXIT_SUCCESS;
}
