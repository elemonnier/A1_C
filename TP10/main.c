#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main() {

    struct Stack* s = emptyStack();
    bool valid;
    printf("%d\n", isStackEmpty(s)); // => 1
    printf("%d\n", stackSize(s)); // => 0
    pop(s, &valid);
    printf("%d\n", valid); // => 0
    push(s, 1, &valid);
    printf("%d\n", valid); // => 1
    push(s, 2, &valid);
    printf("%d\n", valid); // => 1
    push(s, 3, &valid);
    printf("%d\n", valid); // => 1
    printf("%d\n", isStackEmpty(s)); // => 0
    printf("%d\n", stackSize(s)); // => 3
    int item;
    item = top(s, &valid);
    printf("%d %d\n", item, valid); // => 3 1
    printf("%d\n", isStackEmpty(s)); // => 0
    printf("%d\n", stackSize(s)); // => 3
    item = pop(s, &valid);
    printf("%d %d\n", item, valid); // => 3 1
    item = pop(s, &valid);
    printf("%d %d\n", item, valid); // => 2 1
    item = pop(s, &valid);
    printf("%d %d\n", item, valid); // => 1 1
    printf("%d\n", isStackEmpty(s)); // => 1
    printf("%d\n", stackSize(s)); // => 0

    free(s);
    return EXIT_SUCCESS;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"
#include "stack.h"
#include "stack.c"

void test(){
    struct Stack* s = emptyStack();
    bool valid;
    int item;

    printf("\n     La stack est bien vide ?\n");
    if(isStackEmpty(s) == 1){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 1\nEt tu obtient %d",isStackEmpty(s));
    }

    printf("\n     Bon nombre d'élément dans la stack ?\n");
    if(stackSize(s) == 0){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 0\nEt tu obtient %d",stackSize(s));
    }

    printf("\n     Test pop sur vide ?\n");
    pop(s, &valid);
    if(valid == 0){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 0\nEt tu obtient %d\n",valid);
    }

    printf("\n          ------------PUSH-----------\n");
    push(s,1,&valid);
    printf("     Ajout d'un élément 1 - > ");
    if(valid == 1){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 1\nEt tu obtient %d\n",valid);
    }
    printf("     Ajout d'un élément 2 - > ");
    push(s, 2, &valid);
    if(valid == 1){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 1\nEt tu obtient %d\n",valid);
    }
    printf("     Ajout d'un élément 3 - > ");
    push(s, 3, &valid);
    if(valid == 1){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 1\nEt tu obtient %d\n",valid);
    }

    printf("\n     La stack n'est pas vide ?\n");
    if(isStackEmpty(s) == 0){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 0\nEt tu obtient %d\n",isStackEmpty(s));
    }

    printf("\n     Bon nombre d'élément dans la stack ?\n");
    if(stackSize(s) == 3){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 3\nEt tu obtient %d\n",stackSize(s));
    }

    item = top(s, &valid);
    printf("\n     Vérification de la bonne valeur du top\n");
    if(item == 3 && valid == 1){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 3 et 1\nEt tu obtient %d et %d\n",item, valid);
    }
    printf("\n     La stack n'est pas vide ?\n");
    if(isStackEmpty(s) == 0){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 0\nEt tu obtient %d\n",isStackEmpty(s));
    }
    printf("\n     Bon nombre d'élément dans la stack ?\n");
    if(stackSize(s) == 3){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 3\nEt tu obtient %d\n",stackSize(s));
    }

    item = pop(s, &valid);
    printf("\n     ----------Test pop avec top----------\n");
    printf("\n          ----1er pop----\n");
    printf("\n     Vérification de la bonne valeur du top\n");
    if(item == 3 && valid == 1){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 3 et 1\nEt tu obtient %d et %d\n",item, valid);
    }
    item = pop(s, &valid);
    printf("\n          ----2nd pop----\n");
    printf("\n     Vérification de la bonne valeur du top\n");
    if(item == 3 && valid == 1){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 3 et 1\nEt tu obtient %d et %d\n",item, valid);
    }
    item = pop(s, &valid);
    printf("\n          ----3eme pop----\n");
    printf("\n     Vérification de la bonne valeur du top\n");
    if(item == 3 && valid == 1){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 3 et 1\nEt tu obtient %d et %d\n",item, valid);
    }

    printf("\n     La stack est bien vide ?\n");
    if(isStackEmpty(s) == 1){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 0\nEt tu obtient %d\n",isStackEmpty(s));
    }

    printf("\n     Bon nombre d'élément dans la stack ?\n");
    if(stackSize(s) == 0){
        printf(" -> Bien vu l'aveugle ^^\n");
    }
    else{
        printf(" -> Rip\n");
        printf("Tu devrais Obtenir => 3\nEt tu obtient %d\n",stackSize(s));
    }

    printf("\n\nHope you enjoy ! Made by Victor ROYER !\n\n");

}
int main() {
    test();
    return 0;
}
*/