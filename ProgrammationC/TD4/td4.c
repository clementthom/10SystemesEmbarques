#include "td4.h"

// pour pouvoir utiliser les fonctions malloc et free
#include <stdlib.h>

// ATTENTION : pas d'affichage dans les fonctions de ce fichier (donc pas de printf ni de #include <stdlio.h>) !!!



container* create_container()
{
     container *conteneur = malloc(sizeof(float)+sizeof(int));

     if(conteneur !=NULL) {
          conteneur->size=0;
          conteneur->content=NULL;
     }
     return conteneur;
}



int size(container * p_cont)
{
     return sizeof(p_cont);
}

/*

bool add(float element, container * p_cont)
{
     return 0;
} */


/*
float* element_at(int index, container * p_cont)
{

}
*/

/*
bool remove_at(int index, container * p_cont)
{

}
*/

/*
void delete_container(container * p_cont)
{

}
*/