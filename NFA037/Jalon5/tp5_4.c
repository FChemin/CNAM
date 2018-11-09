/*serialisation_tableau_point.c

Exercice 5_4

Un programme réalisant une sérialisation/désérialisation d'un
tableau de points.

Auteur : Florian Chemin
Date : 9 novembre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 26

struct point // Déclaration d'une structure point
{
    char nom;
    int x, y;
};

struct point tableauPoints[n]; // Déclaration d'un tableau de n points

union conversion // Déclaration d'une union
{
    struct point pt;
    char tableau[100];
};

void affichage(struct point p); // Prototype de la fonction affichage

int main(int argc, char *argv[])
{
    union conversion a, b; // Initialisation des deux unions
    int i, j; // Initialisation des compteurs i et j pour les boucles for

    srand(time(NULL)); // Initialisation du générateur de nombre aléatoire

    printf("Les points de départ : \n");

    for(i = 0; i < n; i++) // Initialisation du tableau
    {
        tableauPoints[i].nom = 97 + i; // Affectation d'une valeur décimal ASCII
        tableauPoints[i].x = rand() % 50; // Random x
        tableauPoints[i].y = rand() % 50; // Random y
        affichage(tableauPoints[i]); // Affichage du tableau de points générés
    }

    printf("\n");

    for (i = 0; i < n; i++) // À chaque itération, affichage à l'écran d'un élément
        {
            a.pt = tableauPoints[i]; // Accès au champ point de l'union

            printf("Octets du point %c : ", a.pt.nom);

            for(j = 0; j < sizeof(tableauPoints[i]); j++)
            {
            printf("%2x ", a.tableau[j]); // Affichage de chaque octet de l'union a
            }

            printf("\n");
        }

    printf("\n");

    printf("Les points reçus : \n");

    for (i = 0; i < n; i++) // À chaque itération, affichage à l'écran d'un élément
        {
            a.pt = tableauPoints[i]; // Accès au champ point de l'union

            for(j = 0; j < sizeof(tableauPoints[i]); j++)
            {
            b.tableau[j] = a.tableau[j]; // Affectation de la valeur a.tableau à b.tableau
            }

            affichage(b.pt); // Appel de la fonction affichage()
        }

    return 0;
}

void affichage(struct point p) // Déclaration de la fonction affichage
{
    printf("Point %c de coordonnées (%d;%d)\n", p.nom, p.x, p.y);
}
