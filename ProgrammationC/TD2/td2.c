#include "td2.h"


/*retourne un nombre au carré*/
int carre(int nombre) {
    int carre = nombre*nombre;
    return carre; 
}

int est_pair(int nombre) {

    if(nombre%2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void initialiser(int tab[], int taille) {
    for (int i=0; i<taille; i++) {
        tab[i] = 0;
    }
}


float moyenne_tableau(int tab[], int taille) {
    int tot = 0;
    for (int i=0; i<taille; i++) {
        tot = tot + tab[i];
    }
    tot = tot/taille;
    return tot;
}

void inverser_tableau(int tab[], int taille) {
    int buffer = 0;
    for (int i = 0; i<taille/2; i++) {
        buffer = tab[i];
        tab[i] = tab[taille-1-i];
        tab[taille-1-i] = buffer;
    }
}



int nombre_occurences(int valeur, int tab[], int taille) {
    int nbOccurence = 0;
    for(int i = 0; i<taille; i++) {
        if(tab[i] == valeur) {
            nbOccurence ++;
        }
    }
    return nbOccurence;
}


int rechercher(int valeur, int tab[], int taille) {
    int position = -1;
    for(int i = 0; i<taille; i++) {
        if(tab[i] == valeur) {
            position = i;
        }
    }
    return position;
}


int index_maximum(int tab[], int taille) {
    int valeurMax = 0;
    int position = 0;
    for(int i = 0; i<taille; i++) {
        if(tab[i] > valeurMax) {
            valeurMax = tab[i];
            position = i;
        }
    }
    return position;
}

// ici les autres fonctions à définir