/*projet_jalon6.c

Exercices 6_1 6_2

Un programme créant trois structures (point, segment et polygone)
et affichant les caractéristiques de ces trois figures.

Auteur : Florian Chemin
Date : 19 novembre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct str_Point2D
{
    double x;
    double y;
}Point2D;

typedef struct str_Segment2D
{
    Point2D depart;
    Point2D arrivee;
}Segment2D;

typedef struct str_Polygone2D
{
    Point2D point1;
    Point2D point2;
    Point2D point3;
    Point2D point4;
    Point2D point5;
    Point2D point6;
}Polygone2D;

void printf_Point2D(Point2D p);
void printf_Segment2D(Segment2D s);
void printf_Polygone2D(Polygone2D g);
void demarrage();

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

void printf_Point2D(Point2D p)
{
    printf("Point 2D de coordonnées (%.3f , %.3f)\n\n", p.x, p.y);
}

void printf_Segment2D(Segment2D s)
{
    printf("Segment 2D : \n");
    printf(" - point de départ : (%.3f , %.3f)\n", s.depart.x, s.depart.y);
    printf(" - point d'arrivée : (%.3f , %.3f)\n\n", s.arrivee.x, s.arrivee.y);
}

void printf_Polygone2D(Polygone2D g)
{
    printf("Polygone 2D : \n");
    printf("Point 1 : <%.3f, %.3f>\n", g.point1.x, g.point1.y);
    printf("Point 2 : <%.3f, %.3f>\n", g.point2.x, g.point2.y);
    printf("Point 3 : <%.3f, %.3f>\n", g.point3.x, g.point3.y);
    printf("Point 4 : <%.3f, %.3f>\n", g.point4.x, g.point4.y);
    printf("Point 5 : <%.3f, %.3f>\n", g.point5.x, g.point5.y);
    printf("Point 6 : <%.3f, %.3f>\n", g.point6.x, g.point6.y);
}

void demarrage()
{
    printf("-------------\n");
    printf("| Démarrage |\n");
    printf("-------------\n\n");
}
