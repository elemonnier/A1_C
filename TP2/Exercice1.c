#include <stdio.h>
#include <stdlib.h>

int main ()
{
        float a;
        printf("Question de la mention au bac : \n ------------------------------- \n Entrez la moyenne > ");
        scanf("%f\n", &a);

        if (a < 10)
        {
                printf("La mention obtenue est : Insuffisant\n");
        }
        else if (a >= 10 && a < 12)
        {
                printf("La mention obtenue est : Passable\n");
        }
        else if (a >= 12 && a < 14)
        {
                printf("La mention obtenue est : Assez bien\n");
        }
        else if (a >= 14 && a < 16)
        {
                printf("La mentieon obtenue est : Bien\n");
        }
        else if (a >= 16)
        {
                printf("La mention obtenue est : Très Bien\n");
        }

        return EXIT_SUCCESS;
}
