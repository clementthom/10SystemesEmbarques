#include <stdio.h>
#include <stdlib.h>

#include "td3.c"
#include "td3.h"


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

/* EXERCICES <=> pour tester les fonctions à créer */

void exo0() { printf("Hello World!\n"); }


void exo1(){
    creer_pointeur_afficher_adresse(5);
}


// TEST de la fonction plus_n

void exo2() {
  int e = 42;
  int n = 58;
  printf("e (avant) == %d\n", e);
  printf("e (après) == %d + %d", e, n);
  plus_n(&e, n);
  printf(" == %d\n", e);
}


// TEST de la fonction permuter

void exo3() {
  int a = 5;
  int b = 8;
  printf("Avant : a == %d, b == %d\n", a, b);
  permuter(&a, &b);
  printf("Après : a == %d, b == %d\n", a, b);
}


// TEST de la fonction compteur
// Résultat attendu : 16

void exo4() {
  char *chaine;
  chaine = "bonjour le monde";
  int compteur_res = compteur(chaine);
  printf("nombre de caracteres = %d\n", compteur_res);
}



void exo5() {
  char chaine_inverse[] = "! esarhp al esrevni neib zeva suov ,ovarB";
  char *p_chaine_inverse;
  p_chaine_inverse = chaine_inverse;

  printf(" Avant : %s\n", p_chaine_inverse);
  // int compteur_res = compteur(chaine_inverse);
  inverser_chaine(p_chaine_inverse);
  // stringReverse(chaine_inverse);
  printf(" Après : %s", p_chaine_inverse);
}



void exo6() {
  char *palindrome = "kayak";
  if (est_palindrome(palindrome) == 1) {
    printf("La chaine \"%s\" est un palindrome.\n", palindrome);
  } else {
    printf("La chaine \"%s\" n'est pas un palindrome.\n", palindrome);
  }
  char *palindrome2 = "elle";
  if (est_palindrome(palindrome2) == 1) {
    printf("La chaine \"%s\" est un palindrome.\n", palindrome2);
  } else {
    printf("La chaine \"%s\" n'est pas un palindrome.\n", palindrome2);
  }
  char *paspalindrome = "youpi";
  if (est_palindrome(paspalindrome) == 1) {
    printf("La chaine \"%s\" est un palindrome.\n", paspalindrome);
  } else {
    printf("La chaine \"%s\" n'est pas un palindrome.\n", paspalindrome);
  }
}



void exo7() {
    int n = 5;
    int* tableau = generer_tableau_n_entiers(n);
    printf("| ");
    for (int i = 0; i < n; i++){
      printf("%d | ",*(tableau+i));
    }
    //attendu : | 1 | 2 | 3 | 4 | 5 |
}



void exo8() {
  int nombre_notes = 0;
  printf("Insérez le nombre de notes à saisir : ");
  scanf("%d", &nombre_notes);
  moyenne_matiere(nombre_notes);
  // Exemple d'affichage attendu : "Moyenne = 15.00 * 2.00 + 18.00 * 2.00 + 15.00 * 2.00 + 14.00 * 2.00 = 15.50"
}
