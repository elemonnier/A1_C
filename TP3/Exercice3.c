#include<stdio.h>
#include<stdlib.h>

float AireRectangle (float l, float L)
{
        float aire;
        aire = l * L;
        return aire;
}

int main ()
{
        float l, L, aire;

        printf("Calcul de l'aire d'un rectangle\n------------------------------\nEntrez une longueur et une largeur > ");
        scanf("%f%f\n", &L, &l);

        aire = AireRectangle(L, l);
        printf("L'aire du rectangle est : %f\n", aire);

        return 0;
}
