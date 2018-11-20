/*manipulation_tableau_dyn_ptr.c

Exercice 7_1

Un programme générant un tableau par une allocation dynamique de mémoire,
remplissant au hasard les éléments du tableau et cherchant le minimum
et le maximum de ce tableau aléatoire.

Auteur : Florian Chemin
Date : 20 novembre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>

// Prototypes des fonctions utilisées dans ce programme
void remplir(int* Tableau, int nombreElements);
void afficher(int* Tableau, int nombreElements);
int minimum(int* Tableau, int nombreElements);
int maximum(int* Tableau, int nombreElements);

int main(int argc, char *argv[])
{
    int nombreElements = 0; // Initialisation du nombre d'éléments du tableau
    int* nombreHasard = NULL;// Initialisation du pointeur sur int qui servira de
    //tableau après l'appel à malloc

    srand(time(NULL)); // Initialisation du générateur de nombre aléatoire

    printf("Combien de nombres voulez-vous afficher ? ");// Nombre d'éléments à afficher
    scanf("%d", &nombreElements);

    if (nombreElements > 0) // Il faut au moins un élément
    {
        nombreHasard = malloc(nombreElements*sizeof(int)); // Allocation de la mémoire pour le tableau

        if (nombreHasard == NULL) // Vérification de l'allocation
        {
            exit(0);
        }

        remplir(nombreHasard, nombreElements); // Appel à la fonction remplir
        afficher(nombreHasard, nombreElements); // Appel à la fonction afficher
        printf("Le minimum est : %d\n", minimum(nombreHasard, nombreElements)); // Affiche l'élément le plus petit
        printf("Le maximum est : %d\n", maximum(nombreHasard, nombreElements)); // Affiche l'élément le plus grand

    }

    return 0;
}

void remplir(int* Tableau, int nombreElements) // Implémentation de la fonction remplir
{
    int i;

    for (i = 0; i < nombreElements; i++)
    {
        Tableau[i] = rand() % 100;
    }
}

void afficher(int* Tableau, int nombreElements) // Implémentation de la fonction afficher
{
    int i;

    for (i = 0; i < nombreElements; i++)
    {
        printf("Element %d du tableau : %d\n", i+1, Tableau[i]);
    }
}

int minimum(int* Tableau, int nombreElements) // Implémentation de la fonction minimum
{
    int i, min = Tableau[0];

    for (i = 1; i < nombreElements; i++)
    {
        if (Tableau[i] < min)
        {
            min = Tableau[i];
        }
    }

    return min;
}

int maximum(int* Tableau, int nombreElements) // Implémentation de la fonction maximum
{
    int i, max = Tableau[0];

    for (i = 1; i < nombreElements; i++)
    {
        if (Tableau[i] > max)
        {
            max = Tableau[i];
        }
    }

    return max;
}
