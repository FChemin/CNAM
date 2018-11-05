#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, c;

    printf("Entrez un 1er nombre : ");
    scanf("%d", &a);
    printf("Entrez un 2nd nombre : ");
    scanf("%d", &b);
    printf("Entrez un 3e nombre : ");
    scanf("%d", &c);

    printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
    printf("%d x %d x %d = %d\n", a, b, c, a * b * c);
    printf("La moyenne des 3 nombres est de %d\n\n", (a + b + c) / 3);

    return 0;
}
