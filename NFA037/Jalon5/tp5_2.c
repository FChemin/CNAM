/*symetrie.c

Exercice 5_2

Un programme comprenant une fonction prennant en argument un point
et renvoyant un point du même nom et de coordonnées opposées.

Auteur : Florian Chemin
Date : 8 novembre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>

struct point // Déclaration d'une structure point
{
    char nom;
    int x, y;
};

struct point calculerOppose(struct point p); // Prototype de la fonction calculerOppose

int main(int argc, char *argv[])
{
    struct point pointA, pointB; // Initialisation des variables de type point

    pointA.nom = 'A'; // Affection du nom A à la variable pointA
    pointA.x = 10; // Affection de l'entier 10 au x du pointA
    pointA.y = 12; // Affection de l'entier 12 au y du pointA

    pointB = calculerOppose(pointA); // Appel de la fonction calculerOppose

    printf("Soit le point %c (%d;%d).\n", pointA.nom, pointA.x, pointA.y);
    printf("Son opposé est le point %c (%d;%d)\n\n", pointB.nom, pointB.x, pointB.y);

    return 0;
}

struct point calculerOppose(struct point p)
{
    struct point q; // Initialisation de la variable à retourner

    q.nom = p.nom;
    q.x = 0 - p.x; // Calcul du x opposé
    q.y = 0 - p.y; // Calcul du y opposé

    return q;
}
