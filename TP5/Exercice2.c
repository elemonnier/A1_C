#include<stdio.h>
#include<stdlib.h>

void Afficher (int Tableau[], int i)
{
        for (int compteur = 0; compteur < i; compteur++)
        {
                printf("%d ", Tableau[compteur]);
        }
}

void Recherche (int Tableau[], int i)
{
        int k = 2147483647;
        int j = 0;
        for (int compteur = 0; compteur < i; compteur++)
        {
                if (Tableau[compteur] < k)
                {
                        k = Tableau[compteur];
                        j = compteur+1;
                }
        }
        printf("Son minimum est %d et c'est la %d eme case du tableau\n", k, j);
}

int main()
{
        int a, i=0;
        int Tableau[100];
        printf("Recherche dans un tableau : \n----------------------------------\nEntrez un nombre positif (négatif pour finir) > ");
        scanf("%d", &a);
        while (a>=0)
        {
                Tableau[i] = a;
                i++;
                printf("Entrez un nombre positif (négatif pour finir) > ");
                scanf("%d", &a);
        }
        printf("Le tableau est : ");
        Afficher(Tableau, i);
        printf("\n");
        Recherche(Tableau, i);

        return EXIT_SUCCESS;
}
