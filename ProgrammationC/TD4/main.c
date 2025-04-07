#include <stdio.h>
// pas nécessaire d'inclure <stdbool.h> car cela est fait avec #include "td3.h"
#include "td4.h"
#include "td4.c"


/* PROTOTYPES */
void afficher_conteneur(container * p_cont); // fonction fournie

void exo0();
void exo1();
void exo2();
void exo3();
void exo4();


/* FONCTION PRINCIPALE */
// Code exécuté par l'ordinateur <=> celui dans la fonction 'main' !
int main(void) {
  exo1();// ici appel de l'exercice en cours de réalisation
  return 0;
}




// /* EXERCICES <=> pour tester les fonctions à créer */

void exo0() 
{
  printf("Hello World!\n"); 
}


// TEST de la fonction create_container



void exo1()
{
  container* conteneur = NULL; // création d'une variable de type pointeur sur container, initalisation à NULL
  printf("conteneur : %p \n", conteneur);  // devrait afficher (nil) <=> pointeur NULL

  // saut de ligne
  printf("\n");

  conteneur = create_container();
  printf("conteneur : %p \n", conteneur);  // devrait afficher une adresse (non NULL)
  printf("taille du conteneur : %d \n", conteneur->size); // devrait afficher 0
  printf("contenu du conteneur : %p \n", conteneur-> content); // devrait afficher (nil)  
}




// Fonction fournie pour afficher sur une ligne les éléments du container
// /!\/!\/!\/!\/!\/!\/!\/!\/!\/!\/!\/!\ à décommenter UNE FOIS LA FONCTION size VALIDE 

/*

void afficher_conteneur(container * p_cont)
{
  if( p_cont != NULL )
  {
    int taille = size(p_cont); // la fonction size doit être valide
    for(int i = 0 ; i < taille; i++)
    {
      float elt = *element_at(i,p_cont);
      printf("%.1lf ", elt); // %lf pour réel, %.1lf pour ne garder que 1 chiffre après virgules
    }
  }
  printf("\n");
}

*/

// TEST de la fonction add et size
// doit afficher : 
// 1.0 2.0 3.0 4.0 5.0

/*

void exo2()
{
  container* conteneur = create_container();

  add(1.0, conteneur); // ajoute l'élément 1 dans le conteneur
  add(2.0, conteneur);
  add(3.0, conteneur);
  add(4.0, conteneur);
  add(5.0, conteneur);

  afficher_conteneur(conteneur); // fonction fournie ; nécessite la fonction size valide
}
*/

// TEST de la fonction remove_at (et encore add)
// doit afficher : 
// 1.0 3.0 5.0
// dernier ajout OK
// 1.0 3.0 5.0 6.0
/*
void exo3()
{
  container* conteneur = create_container();

  add(1.0, conteneur); // ajoute l'élément 1 dans le conteneur
  add(2.0, conteneur);
  add(3.0, conteneur);
  add(4.0, conteneur);
  add(5.0, conteneur);

  remove_at(1, conteneur); // supprimer le 2nd élement (en index 1)
  remove_at(2, conteneur); // supprimer le 3e élement... parmi ceux qui restent !!!
  afficher_conteneur(conteneur);

    bool ok = add(6.0, conteneur);
    if(ok)  // <=>  if(ok == true) 
    {
      printf("dernier ajout OK \n");
    }
    else 
    {
      printf("dernier ajout pas OK \n");
    }
  afficher_conteneur(conteneur);
}
*/


// TEST "bilan" avec en plus la fonction delete_container
/*
void exo4()
{
  container* conteneur = create_container();

  add(1.0, conteneur); // ajoute l'élément 1 dans le conteneur
  add(2.0, conteneur);
  add(3.0, conteneur);
  add(4.0, conteneur);
  add(5.0, conteneur);
  afficher_conteneur(conteneur);

  remove_at(1, conteneur); // supprimer le 2nd élement (en index 1)
  remove_at(2, conteneur); // supprimer le 3e élement... parmi ceux qui restent !
  afficher_conteneur(conteneur);

  add(6.0, conteneur);
  afficher_conteneur(conteneur);

  delete_container(conteneur);
  conteneur = NULL; // bon réflexe après free
}
*/