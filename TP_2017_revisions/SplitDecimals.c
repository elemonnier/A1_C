#include <stdio.h>
#include <stdlib.h>

int main () {
        int a, b;
        printf("Entrez un entier > ");
        scanf("%d\n", &a);
        printf("Le nouveau nombre donne : ");
        do  {
                b = a%10;
                printf("%d", b);
                a = a/10;
        }
        while (a > 0);

        printf("\n");

        return 0;
}
