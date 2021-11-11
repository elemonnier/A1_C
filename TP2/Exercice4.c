#include <stdio.h>
#include <stdlib.h>

int main ()
{
        int a;
        printf("Les lettres de l'alphabet :\n---------------------------------\nVous voulez un :\n\t1 - ordre croissant et minuscules\n\t2 - ordre croissant et majuscules\n\t3 - ordre décroissant et minuscules\n\t4 - ordre décroissant et majuscules\nChoix > ");
        scanf("%d\n", &a);
        if (a==1) {
                printf("a b c d e f g h i j k l m n o p q r s t u v w x y z\n");
        }
        if (a==2) {
                printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
        }
        if (a==3) {
                printf("z y x w v u t s r q p o n m l k j i h g f e d c b a\n");
        }
        if (a==4) {
                printf("Z Y X W V U T S R Q P O N M L K J I H G F E D C B A\n");
        }

        return EXIT_SUCCESS;
}
