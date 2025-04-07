#include <stdio.h>
#include "td2.h"
#include "td2.c"

/* Fonction fournie */
void afficher_tableau(int tab[], int taille)
{
  for(int i = 0 ; i < taille ; ++i)
  {
    printf("%d ", tab[i]);
  }
  printf("\n");
}

/* PROTOTYPES */
void exo0();
void exo1();
void exo2();
void exo3();
void exo4();
void exo5();
void exo6();
void exo7();
void exo8();


/* FONCTION PRINCIPALE */
// Code exécuté par l'ordinateur <=> celui dans la fonction 'main' !
int main(void) {
  exo8(); // ici appel de l'exercice en cours de réalisation
  return 0;
}


/* EXERCICES <=> pour tester les fonctions à créer

Normalement, on a pas à écrire de fonctions dans ce fichier, 
il faut juste décommenter les exercices et les tester dans le main 


*/

void exo0() 
{
  printf("Hello World!\n"); 
}

// Décommenter exo1 une fois la fonction carre définie dans td2.c

void exo1() 
{
  int valeur = 5; // tester avec différentes valeurs
  int valeur_carree = carre(valeur);
  printf("Le carré de %d vaut %d\n", valeur, valeur_carree);
}



// Décommenter exo2 une fois la fonction est_pair définie dans td2.c
/*
void exo2() 
{
  int valeur = 13; // tester avec différentes valeurs
  int resultat = est_pair(valeur);

  if (resultat == 0) 
  {
    printf("%d n'est pas pair.\n", valeur);
  } 
  else 
  {
    printf("%d est pair.\n", valeur);
  }
}
*/

// Décommenter une fois la fonction initialiser définie dans td2.c
/*
void exo3() 
{
  const int TAILLE = 20;
  int tableau[TAILLE];
  afficher_tableau(tableau, TAILLE); // à constater : valeurs "aléatoires"  pour les éléments du tableau
  
  initialiser(tableau, TAILLE);
  afficher_tableau(tableau, TAILLE); // maintenant toutes les valeurs doivent être 0 (zéro)
}
*/

// Décommenter une fois la fonction moyenne_tableau définie dans td2.c
/*
void exo4() 
{
  const int TAILLE = 6;
  int tableau[] = {3,16,-4,7,21,-8};
  afficher_tableau(tableau, TAILLE);
  
  float moyenne = moyenne_tableau(tableau, TAILLE); // valeur attendue : 5.833333
  printf("La valeur moyenne des éléments du tableau = %lf\n", moyenne);
}
*/

// Décommenter une fois la fonction inverser_tableau définie dans td2.c
/*
void exo5() 
{
  const int TAILLE = 7;
  int tableau[] = {1,2,3,4,5,6,7};
  afficher_tableau(tableau, TAILLE);
  
  inverser_tableau(tableau, TAILLE);
  afficher_tableau(tableau, TAILLE);
}
*/

// Décommenter une fois la fonction nombre_occurences définie dans td2.c
/*
void exo6() 
{
  const int TAILLE = 10;
  int tableau[] = {8,4,7,6,1,2,6,8,8,3};
  afficher_tableau(tableau, TAILLE);
  
  int val = 6; // tester avec différente valeur : 5 (présente 0 fois), 4 (1 fois), 6 (2 fois), 8 (3 fois)
  int nb = nombre_occurences(val, tableau, TAILLE);
  printf("La valeur %d est présente %d fois\n", val, nb);
}
*/

// Décommenter une fois la fonction rechercher définie dans td2.c
/*
void exo7() 
{
  const int TAILLE = 5;
  int tableau[] = {3, -4, 6, 9, 6}; // tester avec différentes valeurs
  afficher_tableau(tableau, TAILLE);
  
  int val = -4; // tester avec différente valeur : 5 (non présente), -4 (présente), 6 (présente mais 2 fois)
  int index = rechercher(val, tableau, TAILLE);
  if( index == -1 )
  {
    printf("La valeur %d est pas présente.\n", val);
  }
  else
  {
    printf("La valeur %d est présente à l'index %d.\n", val, index);
  }
}
*/

// Décommenter une fois la fonction index_maximum définie dans td2.c

void exo8() 
{
  const int TAILLE = 5;
  int tableau[] = {5, -4, 0, 9, 6}; // tester avec différentes valeurs
  afficher_tableau(tableau, TAILLE);
  
  int index = index_maximum(tableau, TAILLE);
  printf("La valeur maximale %d se trouve à l'index %d\n", tableau[index], index);
}
