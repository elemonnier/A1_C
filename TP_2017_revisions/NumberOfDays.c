#include <stdio.h>
#include <stdlib.h>

int main () {
        int a, b, c, d, e, x, y, z;
        printf("Entrez un nombre de jours > ");
        scanf("%d\n", &a);
        x = 0;
        y = 0;
        z = 0;
        while (a >= 365) {
                a = a - 365;
                x++;
        }
        while (a >= 7) {
                a = a - 7;
                y++;
        }
        z = a;

        printf("%d jours correspond à %d années, %d semaines et %d jours.\n", a, x, y, z);

        return 0;
}
