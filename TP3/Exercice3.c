#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
        float a, b;
        printf("Volume d'une sphère :\n-----------------------\nEntrez la taille du rayon > ");
        scanf("%f\n", &a);
        b = (1.33333 * 3.14159268 * a * a * a);
        printf("Le volume de la sphère est : %.2f\n", b);

        return 0;
}
