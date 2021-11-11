#include<stdio.h>
#include<stdlib.h>

unsigned int FibonacciIterative(unsigned int n)
{
        unsigned int a, b, c;
        if (n==1)
        {
                return 0;
        }
        if (n==2)
        {
                return 1;
        }
        if (n>=3)
        {
                a = 0;
                b = 1;
                for (int compteur = 2; compteur < n; compteur++)
                {
                        c = a + b;
                        a = b;
                        b = c;
                }
                return b;
        }
}

int main ()
{
        unsigned int n, resultat1, resultat2;
        printf("Suite de Fibonacci\n-----------------------------\nEntrez un nombre positif > ");
        scanf("%u", &n);
        resultat1 = FibonacciIterative(n);
        printf("Itérative : %u\n", resultat1);

        return 0;
}
