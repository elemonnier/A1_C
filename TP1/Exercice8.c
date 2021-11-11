#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
        float B, b, h, a, p;
        printf("Entrez la valeur de la grande base > ");
        scanf("%f\n", &B);
        printf("Entrez la valeur de la petite base > ");
        scanf("%f\n", &b);
        printf("Entrez la valeur de la hauteur > ");
        scanf("%f\n", &h);

        a = h*(B+b)/2;
        p = sqrt(((B-b)/2)*((B-b)/2)+h*h)*2+B+b;

        printf("L'aire du trapèze est : ");
        printf("%.2f ", a);
        printf("m²\n");
        printf("Le périmètre du trapèze est : ");
        printf("%.2f", p);
        printf("m\n");

        return EXIT_SUCCESS;
}
