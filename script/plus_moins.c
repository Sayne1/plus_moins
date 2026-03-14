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

void facile(int valeur_a_trouver)
{
    int choix_joueur;

    printf("Niveau facile - essais illimites\n");

    do
    {
        printf("Entrez une valeur : ");
        scanf("%d", &choix_joueur);

        plus_moins(choix_joueur, valeur_a_trouver);

    } while(choix_joueur != valeur_a_trouver);
}

void moyen(int valeur_a_trouver)
{
    int choix_joueur;
    int count = 0;
    printf("Niveau moyen - 25 essais\n");
    while(count < 25)
    {
        printf("Entrez une valeur : ");
        scanf("%d", &choix_joueur);

        plus_moins(choix_joueur, valeur_a_trouver);

        if(choix_joueur == valeur_a_trouver)
            return;

        count++;
    }

    printf("Vous avez perdu\n");
}

void difficile(int valeur_a_trouver)
{
    int choix_joueur;
    int count = 0;
    printf("Niveau difficile - 10 essais\n");
    while(count < 10)
    {
        printf("Entrez une valeur : ");
        scanf("%d", &choix_joueur);

        plus_moins(choix_joueur, valeur_a_trouver);

        if(choix_joueur == valeur_a_trouver)
            return;

        count++;
    }

    printf("Vous avez perdu\n");
}

int main()
{
    int val_a_trouver = 12;
    int choix_niveau;

    printf("Choisissez une difficulte : 1 Facile, 2 Moyen, 3 Difficile : ");
    scanf("%d", &choix_niveau);

    if(choix_niveau == 1)
        facile(val_a_trouver);
    else if(choix_niveau == 2)
        moyen(val_a_trouver);
    else
        difficile(val_a_trouver);

    return 0;
}
