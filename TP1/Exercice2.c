#include <stdio.h>
#include <stdlib.h>

int main ()
{
        float i;
        float j;
        int k;
        float l;
        printf("Division de deux entiers :\n");
        printf("--------------------------\n");
        printf("Entrez deux nombres entiers > ");
        scanf("%f\n",&i);
        scanf("%f\n",&j);
        k=(i/j);
        l=(i/j);
        printf("Division entière : %d\n", k);
        printf("Division flottante : %f\n", l);

        return EXIT_SUCCESS ;
}
