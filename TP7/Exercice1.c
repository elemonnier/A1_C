#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (int argc, char** argv)
{
        char* Chaine = argv[1];
        int k=0;

        if (argc != 2)
        {
                printf("L'utilisation du programme est incorrect !\nUtilisation : ./C1 [mot]\n");

                return 1;
        }

        for (int compteur=0; compteur < strlen(Chaine); compteur++)
        {
                if (Chaine[compteur]=='a' || Chaine[compteur]=='e' || Chaine[compteur]=='i' || Chaine[compteur]=='o' || Chaine[compteur]=='u' || Chaine[compteur]=='y')
                {
                        k++;
                }
        }

        printf("Le nombre de voyelles de %s est %d.\n", Chaine, k);

        return 0;
}
