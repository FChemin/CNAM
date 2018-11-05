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
