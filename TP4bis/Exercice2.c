#include<stdio.h>
#include<stdlib.h>

float Compter (float n)
{
        if (n<10)
        {
                return 1;
        }
        return 1 - Compter(n/10);
}

int main ()
{
        float n, p;
        printf("Compter le nombre de chiffres d'un nombre\n-------------------------------------------------\nEntrez un nombre entier non nul > ");
        scanf("%f", &n);
        while (n<=0)
        {
                printf("Le nombre entré est négatif ou nul\nEntrez un nombre entier non nul >");
                scanf("%f", &n);
        }
        p = Compter(n);
        printf("Le nombre %d contient %d chiffres.\n", n, p);

        return EXIT_SUCCESS;
}
