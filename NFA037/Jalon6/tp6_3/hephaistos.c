/*projet_jalon6_modularisation.c

Exercices 6_3

Ce programme reprend le programme de l'exercice précédent en séparant prototypes
et fonctions sur le principe de la programmation modulaire.

Auteur : Florian Chemin
Date : 19 novembre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "initialisation.h"
#include "affichage.h"

int main(int argc, char *argv[])
{
    Point2D a;
    Segment2D b;
    Polygone2D c;

    a.x = 10;
    a.y = 20;

    b.depart.x = 30;
    b.depart.y = 40;
    b.arrivee.x = 50;
    b.arrivee.y = 60;

    c.point1.x = 30;
    c.point1.y = 40;
    c.point2.x = 50;
    c.point2.y = 60;
    c.point3.x = 70;
    c.point3.y = 80;
    c.point4.x = 20;
    c.point4.y = 30;
    c.point5.x = 90;
    c.point5.y = 60;
    c.point6.x = 60;
    c.point6.y = 10;

    demarrage();
    printf_Point2D(a);
    printf_Segment2D(b);
    printf_Polygone2D(c);

    return 0;
}
