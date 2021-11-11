#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float PuissanceIterative (float x, int n)
{
        int m = x;
        for (int compteur = 0; compteur < n; compteur++)
        {
                m = m * x;
        }
        return m;
}

int main ()
{
        float x, resultat;
        int n;
        printf("Entrez un nombre et sa puissance > ");
        scanf("%f%d", &x, &n);
        resultat = PuissanceIterative(x, n);
        printf("%f^%d vaut %f\n", x, n, resultat);

        return 0;
}
