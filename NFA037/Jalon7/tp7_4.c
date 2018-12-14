/*calculatrice.c

Exercice 7_4

Un programme réalisant quatre opérations (addition, soustraction, multiplication
et division) en prenant comme arguments deux doubles et renvoyant un double
à l'aide d'un pointeur sur fonction.

Auteur : Florian Chemin
Date : 14 décembre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>

/*Prototypes des fonctions réalisant les opérations*/

double additioner(double nombre1, double nombre2);
double soustraire(double nombre1, double nombre2);
double multiplier(double nombre1, double nombre2);
double diviser(double nombre1, double nombre2);

int main(int argc, char *argv[])
{
    double (*calcul)(double nombre1, double nombre2) = NULL; //Déclaration d'un pointeur sur fonction
    double nombre1, nombre2; //Déclaration des opérandes
    char operation; //Déclaration d'une variable pour le choix de l'opération

    printf("Calculatrice\n");
    printf("Veuillez choisir une opération (+,-,*,/) : "); //Choix de l'opération
    scanf("%c", &operation);
    printf("Veuillez entrer un premier nombre : "); //Saisie d'un premier nombre
    scanf("%lf", &nombre1);
    printf("Veuillez entrer un second nombre : "); //Saisie d'un second nombre
    scanf("%lf", &nombre2);
    printf("\n\n");


    switch(operation) //Switch selon l'opération choisie
    {
        case '+':
            printf("Vous avez choisi l'addition !\n");
            calcul = additioner;
            break;
        case '-':
            printf("Vous avez choisi la soustraction !\n");
            calcul = soustraire;
            break;
        case '*':
            printf("Vous avez choisi la multiplication !\n");
            calcul = multiplier;
            break;
        case '/':
            printf("Vous avez choisi la division !\n");
            if(nombre2 == 0) //Condition pour la prise en compte d'une division par 0
            {
                printf("Il n'est pas possible de diviser par zéro !\n\n");
                exit(0);
            }
            else
            {
            calcul = diviser;
            break;
            }
    }

    printf("Le résultat de l'opération est : %lf\n\n", (*calcul)(nombre1, nombre2)); //Affichage du résultat avec appel de la fonction

    return 0;
}

/*Définitions des fonctions réalisant les opérations*/

double additioner(double nombre1, double nombre2)
{
    return nombre1 + nombre2;
}

double soustraire(double nombre1, double nombre2)
{
    return nombre1 - nombre2;
}

double multiplier(double nombre1, double nombre2)
{
    return nombre1 * nombre2;
}

double diviser(double nombre1, double nombre2)
{
    return nombre1 / nombre2;
}

