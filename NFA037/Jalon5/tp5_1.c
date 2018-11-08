/*point.c

Exercice 5_1

Un programme contenant une fonction recevant comme argument
une structure de type point et affichant le contenu sous la
forme "Point B de coordonnées (10;12)".

Auteur : Florian Chemin
Date : 8 novembre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>

struct point // Création de la structure
{
    char nom;
    int x, y;
};

void affichage(struct point pointB); // Prototype de la fonction affichage

int main(int argc, char *argv[])
{
    struct point pointB; // Initialisation d'un point

    pointB.nom = 'B'; // Valeur nom du point
    pointB.x = 10; // Valeur x du point
    pointB.y = 12; // Valeur y du point

    affichage(pointB); // Appel de la fonction affichage

    return 0;
}

void affichage(struct point pointB) // Déclaration de la fonction affichage
{
    printf("Point %c de coordonnées (%d;%d)\n", pointB.nom, pointB.x,
    pointB.y);
}
