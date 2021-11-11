#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void SaisieChaine ()
{

}

int main (int argc, char **argv)
{
        int a = argv[1][0];
        int i=1;

        if (argc != 1)
        {
                printf("L'utilisation du programme est incorrect !\nUtilistaion : ./C2 [nombre]");

                return 1;
        }
        printf("%d. Entrez une chaîne > ", i);
        fgets();
        while (i <= a)
        {
                SaisieChaine();
                i++;
                printf("%d. Entrez une chaîne > ", i);
                fgets();
        }
        strcat();
        printf("La phrase est : %s\n", Chaine);
}
