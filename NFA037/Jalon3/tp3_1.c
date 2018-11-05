/*test.c

Exercice 3_1

Un programme utilisant un test if...else pour trier trois entiers dans un ordre croissant.

Auteur : Florian Chemin
Date : 25 octobre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 1, b = 2, c = 3;
    char premier, second, troisieme;

    int tri[3] = {0};

    if(a != b && a != c && b != c){

        if(a > b && a > c){
            premier = 'a';
            if (b > c){
            second = 'b';
            troisieme = 'c';
            }
            else{
            second = 'c';
            troisieme = 'b';
            }
        }

        else if(b > a && b > c){
            premier = 'b';
            if (a > c){
            second = 'a';
            troisieme = 'c';
            }
            else{
            second = 'c';
            troisieme = 'a';
            }
        }

        else if(c > a && c > b){
            premier = 'c';
            if (a > b){
            second = 'a';
            troisieme = 'b';
            }
            else{
            second = 'b';
            troisieme = 'a';
            }
        }
    }

    else{
        printf("Il y a une égalité !\n");
        return 0;
    }

    printf("Si a = %d, b = %d, c = %d alors %c > %c > %c\n", a, b, c, premier, second,
        troisieme);

    return 0;
}
