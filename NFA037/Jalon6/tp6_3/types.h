#ifndef _TYPES
#define _TYPES

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

#endif // _TYPES
