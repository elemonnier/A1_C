#include<stdio.h>
#include<stdlib.h>

void triatrois(int *a, int *b, int *c)
{
        int *d, *e;
        *d = 0;
        *e = 0;
        if (*a < *b && *b < *c)
        {
                *a = *a;
                *b = *b;
                *c = *c;
        }
        if (*a < *c && *c < *b)
        {
                *a = *a;
                *d = *b;
                *b = *c;
                *c = *d;

        }
        if (*b < *a && *a < *c)
        {
                *c = *c;
                *d = *a;
                *a = *b;
                *b = *d;
        }
        if (*b < *c && *c < *a)
        {
                *d = *a;
                *a = *b;
                *e = *b;
                *b = *c;
                *c = *d;
        }
        if (*c < *a && *a < *b)
        {
        }
        if (*c < *b && *b < *a)
        {
        }
}

int main ()
{
        int a, b, c;
        printf("Tri de trois nombres\n-----------------------------\nEntrez trois nombres > ");
        scanf("%d%d%d", &a, &b, &c);
        triatrois(&a, &b, &c);
        printf("Les trois nombres dans l'ordre croissant sont : %d, %d et %d\n", a, b, c);

        return EXIT_SUCCESS;
}
