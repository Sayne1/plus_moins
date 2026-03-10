#include<stdio.h>
void plus_moins(int choix_joueur, int valeur_a_trouver)
{
   if(choix_joueur == valeur_a_trouver)
   {
      printf("Bingo\n");
   }
   else if(choix_joueur < valeur_a_trouver)
   {
      printf("Trop petit\n");
   }
   else
   {
      printf("Trop grand\n");
   }
}
int main()
{
   int val_a_trouver;
   int choix;

   val_a_trouver = 12;
   do{
      printf("Entrez une valeur : ");
      scanf("%d", &choix);
      plus_moins(choix, val_a_trouver);
      }
   while(choix != val_a_trouver);
}
