#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
        float a, b, c, delta, x, x1, x2;
        printf("Résolution d'une équation du second degré\n----------------------------------\nEntrez la valeur de a > ");
        scanf("%f\n", &a);
        printf("Entrez la valeur de b > ");
        scanf("%f\n", &b);
        printf("Entrez la valeur de c > ");
        scanf("%f\n", &c);
        if (a != 0) {
                delta = (b * b) - (4 * a * c);
                if (delta > 0) {
                        x1 = ( - b - sqrt(delta) ) / ( 2 * a );
                        x2 = ( - b + sqrt(delta) ) / ( 2 * a );
                        printf("Les solutions de l'équation sont %f et %f", x1, x2);
                }
                else
                        if (delta == 0) {
                        x = (- b) / ( 2 * a );
                        printf("La solution de l'équation est %f", x);
                        }

        } else printf("Ce n'est pas une équation du second degré");

        return 0;
}
