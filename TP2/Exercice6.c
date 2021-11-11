#include <stdio.h>
#include <stdlib.h>

int main ()
{
        int n, i, j, k;
        int l = 0;
        printf("Triangle isocèle :\n-------------------------\nEntrez la hauteur du triangle > ");
        scanf("%d", &n);
        for (i=1; i <= n; i++) {
                for (k=n-i; k >= 0; k--) {
                        printf(" ");
                }
                for (j=1; j <= i*2-1; j++) {
                        printf("*");
                }
                printf("\n");
        }

        return 0;
}
