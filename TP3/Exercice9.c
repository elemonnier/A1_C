#include<stdio.h>
#include<stdlib.h>

int Factorielle (int n)
{
        if (n==0)
        {
                return 1;
        }
        else
        {
                return n * Factorielle(n-1);
        }
}

int CoefficientBinomeIterative (int n, int p)
{
        return Factorielle(n) / (Factorielle(p) * Factorielle(n-p));
}

int CoefficientBinomeRecursive (int n, int p)
{
        if (p==0 || p==n)
        {
                return 1;
        }
        return CoefficientBinomeRecursive(n-1, p-1) + CoefficientBinomeRecursive(n-1, p);
}

int Puissance (int x, int n)
{
        int m = 1;
        for (int compteur = 0; compteur < n; compteur++)
        {
                m = m * x;
        }
        return m;
}

int BinomeDeNewtonRecursive (int x, int y, int n)
{
        int b = 0;
        int c = 0;
        for (int p = 0; p <= n; p++)
        {
                b = CoefficientBinomeRecursive(n, p) * Puissance(x, n-p) * Puissance(y, p);
                c = b + c;
        }
        return c;
}

int BinomeDeNewtonIterative (int x, int y, int n)
{
        int b = 0;
        int c = 0;
        for (int p = 0; p <= n; p++)
        {
                b = CoefficientBinomeIterative(n, p) * Puissance(x, n-p) * Puissance(y, p);
                c = b + c;
        }
        return c;
}

int main ()
{
        int n, x, y, k, l;
        printf("Binome de Newton :\n--------------------\nEntrez trois entiers positifs (négatif pour finir) ? ");
        scanf("%d%d%d", &x, &y, &n);
        while (x>=0 && y>=0 && n>=0)
        {
                k = BinomeDeNewtonIterative(x, y, n);
                l = BinomeDeNewtonRecursive(x, y, n);
                printf("Itératif : (%d + %d)^%d = %d\n", x, y, n, k);
                printf("Récursif : (%d + %d)^%d = %d\n", x, y, n, l);
                printf("Entrez trois entiers positifs (négatif pour finir) ? ");
                scanf("%d%d%d", &x, &y, &n);
        }
        return 0;
}
