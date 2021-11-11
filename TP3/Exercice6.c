#include<stdio.h>
#include<stdlib.h>

unsigned int factorielleRecursive(unsigned int n)
{
        if (n==0)
        {
                return 1;
        }
        else
        {
                return n * factorielleRecursive(n-1);
        }
}

unsigned int factorielleIterative(unsigned int n)
{
        unsigned int resultat, nombre;
        nombre = n;
        resultat = 1;
        for (n=1; n <= nombre; n++)
        {
                resultat=n*resultat;
        }
        return resultat;
}

int main ()
{
        unsigned int n, m, o;
        printf("Factorielle\n----------------------\nEntrez un nombre > ");
        scanf("%u\n", &n);
        m = factorielleRecursive(n);
        printf("%u! est égal à %u (fonction récursive)\n", n, m);
        o = factorielleIterative(n);
        printf("%u! est égal à %u (fonction itérative)\n", n, o);

        return 0;
}
