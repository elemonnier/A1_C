#include<stdio.h>
#include<stdlib.h>

int Addition (int a, int b) {
        return a+b;
}

int Soustraction (int a, int b)
{
        return a-b;
}

int Multiplication (int a, int b)
{
        return a*b;
}

float Division (int a, int b)
{
        if (b!=0)
        {
                return (float) a/b;
        }
        else
        {
                return EXIT_FAILURE;
        }
}

int main () {
        int a, b, c, resultat;
        printf("Operations entieres : \n--------------------------\nEntrez deux entiers ? ");
        scanf("%d%d", &a, &b);
        printf("Menu :\n\t1. Addition\n\t2. Soustraction\n\t3. Multiplication\n\t4. Division\n\t5. Quitter\n");
        scanf("%d", &c);
        if (a==1)
        {
                resultat = Addition(a, b);
                printf("L'addition %d + %d vaut %d\n", a, b, resultat);
        }
        if (a==2)
        {
                resultat = Soustraction(a, b);
                printf("La soustraction %d - %d vaut %d\n", a, b, resultat);
        }
        if (a==3)
        {
                resultat = Multiplication(a, b);
                printf("La multiplication %d * %d vaut %d\n", a, b, resultat);
        }
        if (a==4)
        {
                resultat = Division(a, b);
                printf("La division %d / %d vaut %d\n", a, b, resultat);
        }
        if (a==5)
        {
                return EXIT_FAILURE;
        }
        return 0;
}
