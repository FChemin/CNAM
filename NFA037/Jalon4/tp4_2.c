/*calculatrice.c

Exercice 4_2

Un programme utilisant l'instruction switch pour réaliser
les quatres opérations de base (+ - * /) sur deux opérandes.

Auteur : Florian Chemin
Date : 5 novembre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int operande1 = 0, operande2 = 0, resultat = 0;
    char operateur;

    printf("Entrez l'opération à réaliser : ");
    scanf("%d%c%d", &operande1, &operateur, &operande2);

    switch(operateur)
    {
    case '+':
    resultat = operande1+operande2;
    break;

    case '-':
    resultat = operande1-operande2;
    break;

    case '*':
    resultat = operande1*operande2;
    break;

    case '/':
    resultat = operande1/operande2;
    break;

    default:
    printf("Vous n'avez pas rentré correctement votre opération.\n");
    return 0;
    }

    printf("%d%c%d = %d", operande1, operateur, operande2, resultat);

    return 0;
}
