#include<stdio.h>
#include<stdlib.h>

void swap (int *n1, int *n2)
{
        int c;
        c = *n2;
        *n2 = *n1;
        *n1 = c;
}

int main ()
{
        int a, b;

        printf("Inverser deux nombres\n--------------------------\nEntrez deux nombres a et b > ");
        scanf("%d%d", &a, &b);
        swap(&a, &b);
        printf("Maintenant, a vaut %d et b vaut %d\n", a, b);
}
