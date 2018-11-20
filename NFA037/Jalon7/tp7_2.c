/*pointeur_structure.c

Un programme demandant à l'utilisateur de saisir un nombre N
pour créer une zone dynamique de mémoire contenant N points,
initialiser les champs de façon aléatoire et afficher les points.

Auteur : Florian Chemin
Date : 20 novembre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct strPt // Création d'une structure point
{
    int x;
    int y;
}Pt;

int main(int argc, char *argv[])
{
    int i, N = 0; // Initialisation d'un compteur et d'une variable N
    Pt* a = NULL; // Initialisation d'un pointeur

    printf("Saisir un nombre N : ");
    scanf("%d", &N);

    printf("\n");

    srand(time(NULL)); // Initialisation du générateur de nombre aléatoire

    if (N > 0) // Vérifier qu'il y a au moins un élément
    {
        a = (Pt*)malloc(N * sizeof(Pt)); // Allocation de mémoire dynamique

        if (a == NULL) // Si l'OS n'a pas réussi à allouer de mémoire
        {
            exit(0);
        }

        printf("Les points : \n\n");

        for (i = 0; i < N; i++)
        {
            a[i].x = rand() % 100; // Assigner une valeur random à x
            a[i].y = rand() % 100; // Assigner une valeur random à y
            printf("Point %d : <%d, %d>\n", i+1, a[i].x, a[i].y); // Affichage des points
        }

        free(a); // Libération de la mémoire réservée avec malloc
    }

    return 0;
}
