#include <stdio.h>
#include <stdlib.h>

int main ()
{
        char I, V, X, L, C, D, M, a;
        printf("Chiffres romains :\n----------------------\nEntrez un chiffre romain > ");
        scanf("%c", &a);

        switch (a)
        {
                case 'I' : printf("La valeur de I est : 1\n");
                         break;
                case 'V' : printf("La valeur de V est : 5\n");
                         break;
                case 'X' : printf("La valeur de X est : 10\n");
                         break;
                case 'L' : printf("La valeur de L est : 50\n");
                         break;
                case 'C' : printf("La valeur de C est : 100\n");
                         break;
                case 'D' : printf("La valeur de D est : 500\n");
                         break;
                case 'M' : printf("La valeur de M est : 1000\n");
                         break;
                default : printf("%c n'est pas un chiffre romain\n", a);
                         break;
        }

        return EXIT_SUCCESS;
}
