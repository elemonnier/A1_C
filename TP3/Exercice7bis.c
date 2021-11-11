#include<stdio.h>
#include<stdlib.h>

int FibonacciRecursive (int n)
{
        if (n==1 || n==2)
        {
                return 1;
        }
        else
        {
                return FibonacciRecursive(n-1) + FibonacciRecursive(n-2);
        }
}

int main ()
{
        int n, resultat;
        printf("Suite de Fibonacci :\n-------------------------\n");
        do {
                printf("Entrez un nombre positif (CTRL+Z pour finir) > ");
                scanf("%d", &n);
                resultat = FibonacciRecursive(n);
                printf("Le %d ieme terme de la suite de Fibonacci est : %d\n", n, resultat);
        }
        while (n>0);

        return 0;
}
