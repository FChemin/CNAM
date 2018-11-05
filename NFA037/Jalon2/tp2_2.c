/*somme.c

Exercice 2_2

Un programme calculant la somme, le produit et la moyenne de trois entiers entrés
par l'utilisateur à l'aide de la fonction scanf.

Auteur : Florian Chemin
Date : 16 octobre 2018
Cours : NFA037
Établissement: CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, c;

    printf("Entrez un 1er nombre : ");
    scanf("%d", &a);
    printf("Entrez un 2nd nombre : ");
    scanf("%d", &b);
    printf("Entrez un 3e nombre : ");
    scanf("%d", &c);

    printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
    printf("%d x %d x %d = %d\n", a, b, c, a * b * c);
    printf("La moyenne des 3 nombres est de %d\n\n", (a + b + c) / 3);

    return 0;
}
