#include<stdio.h>
#include<stdlib.h>

void Affichage (int Tableau[], int i)
{
        for (int compteur = 0; compteur < i; compteur++)
        {
                printf("%d ", Tableau[compteur]);
        }
}

int Tassage (int Tableau[], int i)
{
        int k = 0;
        for (int compteur = 0; compteur < i; compteur++)
        {
                if (Tableau[compteur] == 0)
                {
                        k++;
                        for (int a = compteur; a < i - 1; a++)
                        {
                                Tableau[a] = Tableau[a+1];
                        }
                        compteur--;
                }
        }
        return k;
}

int main()
{
        int Tableau[100];
        int a, i = 0, n;
        printf("Tassage de tableau :\n--------------------------------------\nEntrez un nombre positif (négatif pour finir) > ");
        scanf("%d", &a);
        while (a>=0)
        {
                Tableau[i] = a;
                i++;
                printf("Entrez un nombre positif (négatif pour finir) > ");
                scanf("%d", &a);
        }
        printf("Le tableau est : ");
        Affichage(Tableau, i);
        printf("\n");
        n = Tassage(Tableau, i);
        i = i - n;
        printf("Le tableau tassé est : ");
        Affichage(Tableau, i);
        printf("\n");

        return EXIT_SUCCESS;
}
