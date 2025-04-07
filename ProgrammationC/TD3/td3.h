#ifndef TD3_H
#define TD3_H
#include <stdio.h>
#include <stdlib.h> // pour pouvoir utiliser les fonctions malloc et free
#include <string.h>


// Afficher l'adresse du paramètre en entrée de fonction ainsi que sa valeur,
// puis, créer un pointeur sur l'adresse de ce paramètre et affiche ce pointeur et la valeur pointée
// Affichage attendu (avec une adresse différente en fonction de votre machine) : 
// "L'adresse de la variable valeur est 0x7ffd33fe60ac et sa valeur est 5"
// "Le pointeur reference l'adresse 0x7ffd33fe60ac, la valeur stocké est 5"
void creer_pointeur_afficher_adresse(int valeur);


// Fonction ajoutant l'entier n à l'entier pointé par p
void plus_n(int *p, int n);

// Fonction permutant les valeurs des variables pointées par pa et pb
void permuter(int *pa, int *pb);

// Fonction qui compte le nombre de lettres dans une chaine de caractère en utilisant l'arithmétique des pointeurs !
// Indice : la variable de « type tableau » représente l'adresse mémoire du
// premier élement du tableau. Ainsi, chaine ⇔ &(chaine[0]) càd l'adresse du 1er
// élément/lettre. Penser à l'arithmétique des pointeurs !
// Indice 2 : le dernier élèment d'une chaine de caractère, 
// c'est le caractère de fin de chaine "\0" (antislash zero)
int compteur(char *chaine);

// Ecrire une fonction qui inverse une chaine de caractère en utilisant l'arithmétique des pointeurs !
void inverser_chaine(char *chaine);

// Ecrire une fonction qui detecte si la chaine de caractère pointée est un palidrome en utilisant l'arithmétique des pointeurs !
// Renvoie 1 si c'est vrai, 0 sinon.
int est_palindrome(char *chaine);


// Ecrire une fonction qui génere un tableau de taille n à l'aide des pointeurs et de malloc,
// puis qui remplit ce tableau avec les n premiers entiers.
// Astuce : on se souvient que pour allouer de la mémoire à un tableau pointé par un pointeur,
// on utilise : ('type') malloc('nombre' * sizeof('type')); avec 'nombre', le nombre de cases du tableau
// et 'type' le type des éléments du tableau.
int* generer_tableau_n_entiers(int n);


// Petit projet : Ecrire un programme qui permet de saisir des notes et des coefficients afin de calculer la moyenne d'une matière :
// 1) Il demande à l'utilisateur combien de notes il y a à saisir (avec scanf)
// 2) Il créer deux tableaux de float ayant une taille égale à son nombre de notes (avec pointeurs + malloc).
// 3) Il demande à l'utilisateur la note et le coef de la note numéro n (avec scanf)
// 4) Enfin il affiche l'opération éffectuée et la moyenne : "Moyenne = (n1 * c1 + n2 * c2 ... + nk*ck) / nombre_notes = moyenne". 
//    Attention à la position de "+", il ne doit pas y en avoir à la fin !
// 5) A la fin, il libère l'espace mémoire consacré aux notes et aux coéfficiants car la moyenne a été calculée (via free).
void moyenne_matiere(int nombre_notes);

#endif