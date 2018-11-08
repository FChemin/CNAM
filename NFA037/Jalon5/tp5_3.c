/*serialisation_point.c

Exercice 5_3

Un programme réalisant une sérialisation/désérialisation d'un point
à l'aide d'une union.

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

union conversion // Déclaration d'une union
{
    struct point pt;
    char tableau[100];
};

void affichage(struct point p); // Prototype de la fonction affichage

int main(int argc, char *argv[])
{
    struct point p, q; // Initialisation des variables de type point
    union conversion a, b; // Initialisation des deux unions
    int i; // Initialisation du compteur i pour la boucle for

    p.nom = 'B';
    p.x = 10;
    p.y = 12;

    printf("Point de départ : ");
    affichage(p);

    a.pt = p; // Accès au champ point de l'union

    printf("Octets : ");
    for (i = 0; i < sizeof(p); i++) // À chaque itération, affichage à l'écran d'un élément
        {
            printf("%2x ", a.tableau[i]);
            b.tableau[i] = a.tableau[i]; // Affectation de la valeur a.tableau à b.tableau
        }

    printf("\n\n");

    q = b.pt; // Accès au champ point de l'union

    printf("Point reçu : ");
    affichage(q);

    return 0;
}

void affichage(struct point p) // Déclaration de la fonction affichage
{
    printf("Point %c de coordonnées (%d;%d)\n\n", p.nom, p.x, p.y);
}
