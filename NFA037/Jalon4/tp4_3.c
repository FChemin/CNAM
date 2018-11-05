/*harmonique.c

Exercice 4_4

Un programme calculant les n premiers termes de la série harmonique,
le nombre de termes étant donné par l'utilisateur.

Auteur : Florian Chemin
Date : 5 novembre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n = 0; // initialisation de la variable n (nombre de termes)
    float somme = 1; // initialisation de la somme

    // demander à l'utilisateur le nombre de termes que comprend la suite
    // et enregistrer la valeur saisie par l'utilisateur dans la variable n
    printf("Combien de termes comprend la série harmonique ? ");
    scanf("%d", &n);

    do
    {
    somme = somme + (float)1/n; //conversion explicite (casting) pour obtenir un réel de la division
    n--; //décrémentation de n
    }while(n != 1); // tant que n est différent de 1, on boucle

    printf("La somme des n premiers termes de la série harmonique est égale à %.2f.\n",
    somme); //affichage du résultat

    return 0;
}
