#include <stdio.h>
#include <stdlib.h>

int main ()
{
        int a, b;
        printf("Je veux un nombre positif :\n-------------------------------\nVous voulez utiliser un :\n\t1 - while\n\t2 - do while\nChoix > ");
        scanf("%d", &a);

        if (a==1)
        {
                printf("Entrez un nombre positif ou nul > ");
                scanf("%d", &b);
                while (b < 0)
                {
                        printf("L'entier saisi est négatif\nEntrez un nombre positif ou nul > ");
                        scanf("%d", &b);
                }
                if (b >= 0) {printf("Merci\n");}
        }
        if (a==2) {
                printf("Entrez un nombre positif ou nul > ");
                scanf("%d", &b);
                do
                {
                printf ("Le nombre choisi est négatif\nEntrez un nombre positif ou nul > ");
                scanf("%d", &b);
                }
                while (b < 0);
                printf("Merci\n");
        }

        return EXIT_SUCCESS;
}
