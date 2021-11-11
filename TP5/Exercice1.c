#include<stdio.h>
#include<stdlib.h>

void AfficherTableau (int Tableau[], int a)
{
        for (int compteur = 0; compteur < a; compteur++)
        {
                printf("%d ", Tableau[compteur]);
        }
}

void InverseTableau (int Tableau[], int a)
{
        int h=0;
        for (int compteur = 0; compteur < a/2; compteur++)
        {
                h = Tableau[compteur];
                Tableau[compteur] = Tableau[a-1-compteur];
                Tableau[a-1-compteur] = h;
        }
}

int main ()
{
        int a, i;
        int Tableau[100]={0};
        printf("Suite inverse :\n------------------------\nEntrez un nombre positif (négatif pour finir) > ");
        scanf("%d", &a);
        while (a>=0)
        {
                Tableau[i] = a;
                i++;
                printf("Entrez un nombre positif (négatif pour finir) > ");
                scanf("%d", &a);
        }
        printf("Tableau initial : ");
        AfficherTableau(Tableau, i);
        printf("\nTableau inverse : ");
        InverseTableau(Tableau, i);
        AfficherTableau(Tableau, i);
        printf("\n");

        return EXIT_SUCCESS;
}
