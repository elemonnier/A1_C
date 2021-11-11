#include <stdio.h>
#include <stdlib.h>

int main ()
{
        int a;
        printf("Calcul de la moyenne :\n--------------------------------\n");
        do
        {
                printf("Entrez un nombre positif ou nul (négatif pour finir)");
                scanf("%d\n", &a);
        }
        while (a <= 0);
        printf("Moyenne : %d, &b");

        return EXIT_SUCCESS;
}
