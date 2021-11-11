#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Majuscules (char chaine[])
{
        int n = strlen (chaine);
        for (int compteur = 0; compteur <= n; compteur++)
        {
                if (chaine[compteur] == 'a') {chaine[compteur] == 'A';}
                if (chaine[compteur] == 'b') {chaine[compteur] = 'B';}
                if (chaine[compteur] == 'c') {chaine[compteur] = 'C';}
                if (chaine[compteur] == 'd') {chaine[compteur] = 'D';}
                if (chaine[compteur] == 'e') {chaine[compteur] = 'E';}
                if (chaine[compteur] == 'f') {chaine[compteur] = 'F';}
                if (chaine[compteur] == 'g') {chaine[compteur] = 'G';}
                if (chaine[compteur] == 'h') {chaine[compteur] = 'H';}
                if (chaine[compteur] == 'i') {chaine[compteur] = 'I';}
                if (chaine[compteur] == 'j') {chaine[compteur] = 'J';}
                if (chaine[compteur] == 'k') {chaine[compteur] = 'K';}
                if (chaine[compteur] == 'l') {chaine[compteur] = 'L';}
                if (chaine[compteur] == 'm') {chaine[compteur] = 'M';}
                if (chaine[compteur] == 'n') {chaine[compteur] = 'N';}
                if (chaine[compteur] == 'o') {chaine[compteur] = 'O';}
                if (chaine[compteur] == 'p') {chaine[compteur] = 'P';}
                if (chaine[compteur] == 'q') {chaine[compteur] = 'Q';}
                if (chaine[compteur] == 'r') {chaine[compteur] = 'R';}
                if (chaine[compteur] == 's') {chaine[compteur] = 'S';}
                if (chaine[compteur] == 't') {chaine[compteur] = 'T';}
                if (chaine[compteur] == 'u') {chaine[compteur] = 'U';}
                if (chaine[compteur] == 'v') {chaine[compteur] = 'V';}
                if (chaine[compteur] == 'w') {chaine[compteur] = 'W';}
                if (chaine[compteur] == 'x') {chaine[compteur] = 'X';}
                if (chaine[compteur] == 'y') {chaine[compteur] = 'Y';}
                if (chaine[compteur] == 'z') {chaine[compteur] = 'Z';}
        }
}

int main (int argc, char** argv)
{
        char* chaine;
        char chaine2[32];
        if (argc == 1)
        {
                printf("Entrez une chaîne : ");
                fgets(chaine2, 30, stdin);
                Majuscules(chaine2);
                printf("Votre chaine en majuscules est : %s\n", chaine2);

                return 0;
        }
        if (argc == 2)
        {
                chaine = argv[1];
                Majuscules(chaine);
                printf("Votre chaine en majuscules est : %s\n", chaine);

                return 0;
        }
        else
        {
                printf("L'utilisation du programme est incorrect !!\n");

                return 1;
        }
}
