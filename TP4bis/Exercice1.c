#include<stdio.h>
#include<stdlib.h>

int SommeEntiers (int n)
{
        int c;
        if (n==1)
        {
                return 1;
        }
        if (n!=1)
        {
                return n + SommeEntiers(n-1);
        }
}

int main ()
{
        int n, p;
        printf("Somme des entiers de 1 à n\n------------------------\nEntrez un nombre entier positif non nul > ");
        scanf("%d", &n);
        while (n<=0)
        {
                printf("Le nombre entré n'est pas positif\nEntrez un nombre positif non nul > ");
                scanf("%d", &n);
        }
        p = SommeEntiers(n);
        printf("La somme de 1 à %d est égale à %d\n", n, p);

        return EXIT_SUCCESS;
}
