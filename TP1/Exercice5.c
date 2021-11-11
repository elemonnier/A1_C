#include <stdio.h>
#include <stdlib.h>

int main ()
{
        int a, b, c, d;

        printf("Entrez quatre entiers > \n");
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &d);

        printf("Avant permutation : ");
        printf("%d", a);
        printf("%d", b);
        printf("%d", c);
        printf("%d\n", d);

        printf("Après permutation : ");
        printf("%d", d);
        printf("%d", a);
        printf("%d", b);
        printf("%d\n", c);

        return EXIT_SUCCESS;

}
