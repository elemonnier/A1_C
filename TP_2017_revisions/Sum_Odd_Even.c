#include <stdio.h>
#include <stdlib.h>

int main () {
        int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q;
        printf("Entrez cinq entiers dans l'ordre > ");
        scanf("%d%d%d%d%d\n", &a, &b, &c, &d, &e);
        if (0 == a%2) {
                f = a;
                k = 0;
        } else {
                k = a;
                f = 0;
        }
        if (0 == b%2) {
                g = b;
                l = 0;
        } else {
                l = b;
                g = 0;
        }
        if (0 == c%2) {
                h = c;
                m = 0;
        } else {
                m = c;
                h = 0;
        }
        if (0 == d%2) {
                i = d;
                n = 0;
        } else {
                n = d;
                i = 0;
        }
        if (0 == e%2) {
                j = e;
                o = 0;
        } else {
                o = e;
                j = 0;
        }
        p = f + g + h + i + j;
        q = k + l + m + n + o;
        printf ("La somme des valeurs paires entrées est : %d\n", p);
        printf ("La somme des valeurs impaires entrées est : %d\n", q);

        return 0;
}
