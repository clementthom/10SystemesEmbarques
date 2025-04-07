#ifndef TD2_H
#define TD2_H

// Ce fichier permet de renseigner toutes les fonctions disponibles dans main.c et écrite dans td2.c
// Il fait la passerelle entre les deux fichiers !


// Fonction qui retourne la valeur au carré du paramètre nombre
int carre(int nombre);

// Fonction qui retourne 1 si le paramètre nombre est pair, 0 sinon
int est_pair(int nombre);

// Fonction qui affecte à 0 la valeur de chaque élément contenu dans le tableau tab de longueur taille 
void initialiser(int tab[], int taille);

// Fonction qui retourne la valeur moyenne des éléments contenu dans le tableau tab de longueur taille 
float moyenne_tableau(int tab[], int taille);

// Fonction qui inverse l'ordre des valeurs des éléments dans le tableau tab de longueur taille 
// C'est à dire : le premier élément prend la valeur du dernier, le second prend celle de l'avant dernier, etc.
void inverser_tableau(int tab[], int taille);

// Fonction qui retourne le nombre d'occurences (le nombre de fois) où la valeur est présente parmi les éléments du tableau tab de longueur taille 
int nombre_occurences(int valeur, int tab[], int taille);

// Fonction qui retourne l'index de l'élément dans le tableau tab (de longueur taille) si cet élément a pour contenu valeur.
// Si aucun élémént ne possède cette valeur, -1 est retourné (-1 représentant un index non valide, cela a pour signification "valeur non présente").
// En cas de plusieurs occurences de valeur, returner l'index de seulement un des éléments trouvés. Que faire dans ce cas pour retourner soit la première occurence, soit la dernière ?
int rechercher(int valeur, int tab[], int taille);

// Fonction qui retourne l'index de la valeur maximale présente parmi les éléments du tableau tab de longueur taille 
// Attention ce n'est pas la valeur maximale qui est retournée, mais son index (ce qui permet en plus d'en connaître la position !)
int index_maximum(int tab[], int taille);


#endif