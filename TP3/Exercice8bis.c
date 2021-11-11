#include<stdio.h>
#include<stdlib.h>

float PuissanceRecursive (float x, int n)
{
        if (n==1)
        {
                return x;
        }
        if (0==n%2)
        {
                return PuissanceRecursive(x*x, n/2);
        }
        else
        {
                return x * PuissanceRecursive(x, n-1);
        }
}

int main ()
{
        float x, result;
        int n;
        printf("Puissance\n---------------\nEntrez un réel et un entier positif (négatif pour finir) > ");
        scanf("%f%d", &x, &n);
        while (n >= 0)
        {
                result = PuissanceRecursive(x, n);
                printf("%f à la puissance %d vaut : %f\n", x, n, result);
                printf("Entrez un réel et un entier positif (négatif pour finir) > ");
                scanf("%f%d", &x, &n);
        }
}
