#include<stdio.h>
#include<stdlib.h>

void TrianglePascal(int Tableau[100][100], int ordre)
{
        for (int i = 1; i < 10; i++)
        {
                for (int j = 1; j < 10; j++)
                {
                        Tableau[i][j] = Tableau[i-1][j-1] + Tableau[i-1][j];
                }
        }
        for (int k=0; k < 10; k++)
        {
                if (Tableau[ordre][k] != 0)
                {
                        printf("%d ", Tableau[ordre][k]);
                }
        }
}

int main ()
{
        int ordre;
        int Tableau[100][100];
        printf("Triangle de Pascal :\n---------------------------------\nEntrez un nombre positif (négatif pour finir) > ");
        scanf("%d", &ordre);
        Tableau[0][0] = 1;
        for (int i=1; i < 10; i++)
        {
                Tableau[0][i] = 0;
        }
        for (int j=1; j < 10; j++)
        {
                Tableau[j][0] = 1;
        }
        TrianglePascal(Tableau, ordre);
        printf("\n");

        return EXIT_SUCCESS;
}
