/*testsizeof.c

Exercice 2_1

Un programme utilisant la sortie standard pour afficher la taille d'un entier
et le premier et dernier caractère d'une chaîne

Auteur : Florian Chemin
Date : 16 octobre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char* chaine = "bonjour, ceci est une chaîne";
    int entier = 10, taille = 0;

    taille = sizeof(entier);
    printf("La taille de l'entier %d est de %d bytes\n", entier, taille);

    printf("Le premier caractère de la chaîne \"%s\" est %c (%d en ASCII) et le dernier est %c (%d en ASCII)\n\n",
        chaine, chaine[0], chaine[0], chaine[strlen(chaine)-1], chaine[strlen(chaine)-1]);

    return 0;
}
