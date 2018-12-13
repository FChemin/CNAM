/*alphabet_bilitere.c

Exercice 7_3

Un programme permettant de coder et décoder un message
à l'aide de l'alphabet bilitère de Francis Bacon.

Auteur : Florian Chemin
Date : 20 novembre 2018
Cours : NFA037
Établissement : CNAM Bretagne
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* code[] = {
	"AAAAA", // A
	"AAAAB", // B
	"AAABA", // C
    "AAABB", // D
    "AABAA", // E
    "AABAB", // F
    "AABBA", // G
    "AABBB", // H
    "ABAAA", // I
    "ABAAA", // J
    "ABAAB", // K
    "ABABA", // L
    "ABABB", // M
    "ABBAA", // N
    "ABBAB", // O
    "ABBBA", // P
    "ABBBB", // Q
    "BAAAA", // R
    "BAAAB", // S
    "BAABA", // T
    "BAABB", // U
    "BAABB", // V
    "BABAA", // W
    "BABAB", // X
    "BABBA", // Y
    "BABBB", // Z
    };

void coder(char* texteACamoufler, char* texteDeCamouflage);
char* decoder(char* texteADecoder);

int main(int argc, char *argv[])
{
    char* texteACamoufler = NULL;
    char* texteDeCamouflage = NULL;

    texteACamoufler = (char*)malloc(6);
    texteDeCamouflage = (char*)malloc(26);

    if (texteACamoufler == NULL)
    {
        exit(0);
    }

    if (texteDeCamouflage == NULL)
    {
        exit(0);
    }

    printf("Entrez le texte à camoufler : ");
    scanf("%5s", texteACamoufler);
    printf("Entrez le texte de camouflage : ");
    scanf("%25s", texteDeCamouflage);

    printf("\n\n");
    printf("Codage :\n");
    printf("--------\n\n");

    coder(texteACamoufler, texteDeCamouflage);

    printf("\n\n");
    printf("Décodage :\n");
    printf("--------\n\n");

    decoder(texteDeCamouflage);

    free(texteACamoufler);
    free(texteDeCamouflage);

    return 0;
}

void coder(char* texteACamoufler, char* texteDeCamouflage)
{
    char* texteIntermediaire = NULL;
	int i;

	texteIntermediaire = (char*)malloc(strlen(texteDeCamouflage) + 1);

	if (texteIntermediaire == NULL)
    {
        exit(0);
    }

    for (i = 0; i < strlen(texteACamoufler); i++)
	{
        strcat(texteIntermediaire, code[toupper(texteACamoufler[i]) - 'A']);
	}

	printf("Texte intermédiaire : %s\n", texteIntermediaire);

	for (i = 0; i < strlen(texteIntermediaire); i++)
	{
        if (texteIntermediaire[i] == 'A')
        {
            texteDeCamouflage[i] = toupper(texteDeCamouflage[i]);
        }

        else
        {
            texteDeCamouflage[i] = tolower(texteDeCamouflage[i]);
        }
	}

	printf("Texte final : %s\n", texteDeCamouflage);
}

char* decoder(char* texteADecoder)
{
    char* texteIntermediaire = NULL;
    char* texteDecode = NULL;
	int i,j;

	texteIntermediaire = (char*)malloc(strlen(texteADecoder) + 1);
	texteDecode = (char*)malloc(strlen(texteADecoder)/5+1);

	if (texteIntermediaire == NULL)
    {
        exit(0);
    }

    for (i = 0; i < strlen(texteADecoder); i++)
	{
        if(isupper(texteADecoder[i]))
        {
            strcat(texteIntermediaire, "A");
        }
        else
        {
            strcat(texteIntermediaire, "B");
        }
	}

	for (i = 0; i < strlen(texteADecoder)/5; i++)
	{
        j = 0;
        while (j < 26)
        {
            if (strncmp((texteIntermediaire + i*5), code[j], 5) == 0)
            {
                texteDecode[i] = j + 'A';
                j = 27;
            }
            else
            {
                j++;
            }
        }
	}

	printf("Texte intermédiaire : %s\n", texteIntermediaire);

	printf("Texte décodé : %s\n", texteDecode);
}
