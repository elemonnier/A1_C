#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define VIDE 0
#define DECOUVERTE 1
#define TRESOR_CACHE 2
#define TRESOR_DECOUVERT 3
#define TAILLE_GRILLE 20

void InitialiserGrille (int Tableau[20][20])
{
        for (int i = 0; i < TAILLE_GRILLE; i++)
        {
                for (int j = 0; j < TAILLE_GRILLE; j++)
                {
                        Tableau[i][j] = VIDE;
                }
        }
}

void AfficherGrille (int Tableau[20][20])
{
        for (int i = 0; i < TAILLE_GRILLE; i++)
        {
                for (int j = 0; j < 20; j++)
                {
                        if (Tableau[i][j] == VIDE)
                        {
                                printf("X ");
                        }
                        if (Tableau[i][j] == DECOUVERTE)
                        {
                                printf("  ");
                        }
                        if (Tableau[i][j] == TRESOR_CACHE)
                        {
                                printf("X ");
                        }
                        if (Tableau[i][j] == TRESOR_DECOUVERT)
                        {
                                printf("$ ");
                        }
                }
                printf ("\n");
        }
}

void DemanderLigneEtColonne (int* ligne, int* colonne)
{
        int a, b;
        printf("Entrez la prochaine ligne à jouer > ");
        scanf("%d", &a);
        printf("Entrez la prochaine colonne à jouer > ");
        scanf("%d", &a);
        *ligne = a;
        *colonne = b;
}

void CacherTresor (int x, int y)
{
        x = rand()%20;
        y = rand()%20;
}

void AfficherDistance (int x1, int y1, int x2, int y2)
{

}

int main ()
{
        srand (time(NULL));
        int Tableau[20][20];
        int ligne, colonne;
        int x, y;
        printf("          ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n          ▒▒ Grille de jeu ▒▒\n          ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n");
        InitialiserGrille(Tableau);
        AfficherGrille(Tableau);
        DemanderLigneEtColonne(&ligne, &colonne);
        CacherTresor(x, y);

        return EXIT_SUCCESS;
}
