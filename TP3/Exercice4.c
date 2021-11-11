#include<stdio.h>
#include<stdlib.h>

int EstEquilateral (int a, int b, int c)
{
        if (a==b && b==c && a==c)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}

int EstIsocele (int a, int b, int c)
{
        if (a==b || a==c || b==c)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}

int EstRectangle (int a, int b, int c)
{
        if (a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}

int EstQuelconque (int a, int b, int c)
{
        if (EstEquilateral(a, b, c)!=1 && EstIsocele(a, b, c)!=1 && EstRectangle(a, b, c)!=1)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}

int main ()
{
        int a, b, c;
        printf("Triangles\n-------------\nEntrez la longueur des trois côtés du triangle > ");
        scanf("%d%d%d", &a, &b, &c);

        if (EstEquilateral(a, b, c)==1)
        {
                printf("Le triangle est équilatéral\n");
        }
        if (EstIsocele(a, b, c)==1)
        {
                printf("Le triangle est isocèle\n");
        }
        if (EstRectangle(a, b, c)==1)
        {
                printf("Le triangle est rectangle\n");
        }
        if (EstQuelconque(a, b, c)==1)
        {
                printf("Le triangle est quelconque\n");
        }

        return 0;
}
