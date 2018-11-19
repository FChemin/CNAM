#include <stdio.h>
#include <stdlib.h>
#include "types.h"

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

