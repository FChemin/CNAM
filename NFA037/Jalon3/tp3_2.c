/*modulo.c

Exercice 3_2

Un programme prenant deux nombres et affichant le résultat de la division entière
et le reste de la division entière seulement s'il y en a un.

Auteur : Florian Chemin
Date : 25 octobre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nombre1 = 0, nombre2 = 0, reste = 0;

    printf("Veuillez saisir un premier nombre : ");
    scanf("%d", &nombre1);
    printf("Veuillez saisir un second nombre : ");
    scanf("%d", &nombre2);

    if(nombre1 % nombre2 !=0)
    {
        printf("Résultat : %d\n", nombre1 / nombre2);
        printf("Reste : %d\n\n", nombre1 % nombre2);
    }
    else
    {
        printf("Résultat : %d\n\n", nombre1 / nombre2);
    }

    return 0;
}
