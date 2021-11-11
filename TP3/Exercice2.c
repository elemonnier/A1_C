#include <stdio.h>
#include <stdlib.h>

void punition1 (int n)
{
        for (int compteur = 0; compteur < n; compteur++)
        {
                printf("Je dois apprendre mes cours\n");
        }
}

int main ()
{
        int a;

        printf("Entrez un nombre de lignes > ");
        scanf("%d", &a);
        punition1 (a);

        return EXIT_SUCCESS;
}
