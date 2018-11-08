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

struct point
{
    char nom;
    int x, y;
};

struct point calculerOppose(struct point p);

int main(int argc, char *argv[])
{
    struct point pointA, pointB;

    pointA.nom = 'A';
    pointA.x = 10;
    pointA.y = 12;

    pointB = calculerOppose(pointA);

    printf("Soit le point %c (%d;%d).\n", pointA.nom, pointA.x, pointA.y);
    printf("Son opposé est le point %c (%d;%d)\n\n", pointB.nom, pointB.x, pointB.y);

    return 0;
}

struct point calculerOppose(struct point p)
{
    struct point q;

    q.nom = p.nom;
    q.x = 0 - p.x;
    q.y = 0 - p.y;

    return q;
}
