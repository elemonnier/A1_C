#include <stdio.h>
#include <stdlib.h>

int main () {
        int *p;
        printf("Tailles des variables :\n--------------------------\n");
        printf("La taille mémoire d'un int est %ld bytes\n", sizeof(int));
        printf("La taille mémoire d'un float est %ld bytes\n", sizeof(float));
        printf("La taille mémoire d'un double est %ld bytes\n", sizeof(double));
        printf("La taille mémoire d'un char est %ld bytes\n", sizeof(char));
        printf("La taille mémoire d'un pointeur sur un int est %ld bytes\n", sizeof(*p));

        return EXIT_SUCCESS;
}
