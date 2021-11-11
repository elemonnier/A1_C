#include <stdio.h>
#include <stdlib.h>

int main ()
{
        float a, b, c, d;
        printf("Entre un prix > ");
        scanf("%f\n", &a);
        printf("Prix HT : ");
        b = 0.196;
        c = a*b;
        d = a + c;

        printf("%.2f\n", a);
        printf("Prix TTC : ");
        printf("%.2f\n", d);

        return EXIT_SUCCESS;
}
