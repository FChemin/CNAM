/*logique.c

Exercice 3_3

Un programme effectuant des opérations logiques à partir de deux variables :
ET, OU, OU exclusif, complément à 1, décalage à gauche, décalage à droite et
affichant les résultats sous forme binaire à l'aide d'une boucle for.

Auteur : Florian Chemin
Date : 26 octobre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 0x2A, b = 0xE7, masque = 1;
    int i, et, ou, xor, complementA, complementB, bitGauche, bitDroite, etBinaire;

    printf("Pour a = %x et b = %x\n\n", a, b);

    et = a & b;
    printf("ET logique : a & b = %x\n", et);

    ou = a | b;
    printf("OU logique : a & b = %x\n", ou);

    xor = a ^ b;
    printf("XOR : a ^ b = %x\n", xor);

    complementA = ~a;
    complementB = ~b;
    printf("Complément à 1 : ~a = %x et ~b = %x\n", complementA, complementB);

    bitGauche = a << 3;
    printf("Décalage à de trois bits à gauche de a : a = %x\n", bitGauche);

    bitDroite = b >> 4;
    printf("Décalage à de quatre bits à droite de b : b = %x\n", bitDroite);

    printf("ET en binaire : ");

    for(i = 7; i >= 0; i--)
    {
        etBinaire = et >> i;

        if(etBinaire & masque)
        printf("1");
        else
        printf("0");
    }

    printf("\n");

    return 0;
}
