#ifndef TD4_H
#define TD4_H

// pour gérer le type bool
#include <stdbool.h>


/*
 * Définition du type structuré 'container' pour gérer un « tableau dynamique » de réels.
 * - les réels sont stockés dans un tableau « classique » de réels
 * - size renseigne le nombre d'éléments dans ce tableau
 */
typedef struct 
{
	float* content;
	int size;
} container;



/*
 * Fonction qui crée dynamiquement un conteneur
 * - allocation dynamique pour le type container
 * - la valeur de size vaut 0
 * - le contenu est sans élément, donc NULL
 * Retour : un pointeur sur le conteneur créé
 */
container* create_container();


/*
 * Fonction qui donne le nombre d'éléments (logiquement) contenu dans un conteneur
 * Paramètre p_cont : le (pointeur en accès sur le) conteneur 
 * Retour : le nombre d'éléments (size)
 */
int size(container * p_cont);


/*
 * Fonction qui ajoute un élément À LA FIN du conteneur
 * Paramètre element : l'élément à ajouter
 * Paramètre p_cont : le (pointeur sur le) conteneur dans lequel ajouter
 * Retour : true si l'ajout a pu se faire ; false sinon
 * Remarque : il faut bien sûr un tableau plus grand (+1) pour pouvoir y stocker les éléments actuels + le nouvel élément.
 * On va donc remplacer l'ancien tableau par le nouveau tableau avec une case en plus.
 * Attention : penser à libérer la mémoire associé à l'ancien tableau (celui contenant les éléments actuels)
 */
bool add(float element, container * p_cont);


/*
 * Fonction qui accède à un élément dans un conteneur selon sa position
 * Paramètre index : la position de l'élément à accéder (1ère position : index 0)
 * Paramètre p_cont : le (pointeur en accès sur le) conteneur dans lequel accéder à l'élément
 * Retour : un accès à l'élément concerné ; NULL si accès non possible
 */
float* element_at(int index, container * p_cont);


/*
 * Fonction qui supprime un élément à un conteneur
 * Paramètre index : la position de l'élément à supprimer (1ère position : index 0)
 * Paramètre p_cont : le (pointeur sur le) conteneur dans lequel supprimer
 * Retour : true si la suppression a pas pu se faire ; false sinon
 */
bool remove_at(int index, container * p_cont);


/*
 * Fonction qui détuit le conteneur et libère toute la mémoire associée.
 * Paramètre p_cont : le (pointeur sur le) conteneur à détuire
 * Attention : ne pas oublier de libérer la mémoire associée au tableau content (avant la mémoire associée à p_cont)
 * Note : penser à mettre à NULL la variable passée en paramètre après utilisation de cette fonction.
 */
void delete_container(container * p_cont);


#endif