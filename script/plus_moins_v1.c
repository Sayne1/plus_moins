#include <stdio.h>

void plus_moins(int choix_joueur, int valeur_a_trouver)
{
   if(choix_joueur == valeur_a_trouver)
        printf("Bingo\n");
    else if(choix_joueur < valeur_a_trouver)
        printf("Trop petit\n");
    else
        printf("Trop grand\n");
}
int main()
{
    int val_a_trouver = 12;
    int choix_joueur;
    printf("Entrez une valeur a trouve : ");
    scanf("%d", &choix_joueur);

    plus_moins(choix_joueur, val_a_trouver);


return 0;
}
