#include <stdio.h>
#include <stdlib.h>

int main ()
{
        char a, b;
        printf("Caractère :\n----------\nEntrez un caractère entre a et y > ");
        scanf("%c\n", &a);
        b=a++;
        printf("Le caractère suivant dans l'alphabet est : ");
        printf("%c\n", b);

        return EXIT_SUCCESS;
}
