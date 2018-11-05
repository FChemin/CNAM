/*temp.c

Exercice 4_1

Un programme utilisant une fonction pour convertir une température en Celsius
donnée par l'utilisateur en une température en Farenheit.

Auteur : Florian Chemin
Date : 5 novembre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>

float conversionTemp(float tempCelsius);

int main(int argc, char *argv[])
{
    float tempCelsius = 0, tempFarenheit = 0;

    printf("Entrez une température en Celsius à convertir : ");
    scanf("%f", &tempCelsius);

    tempFarenheit = conversionTemp(tempCelsius);

    printf("%.2f°C équivaut à %.2f°F\n", tempCelsius, tempFarenheit);

    return 0;
}

float conversionTemp(float tempCelsius)
{
    float tempFarenheit = 1.8*tempCelsius+32;

    return tempFarenheit;
}
