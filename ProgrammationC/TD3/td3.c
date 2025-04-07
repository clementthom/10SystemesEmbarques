#include "td3.h"

// à compléter selon le fichier td3.h



void creer_pointeur_afficher_adresse(int valeur){
    printf("L'adresse de la variable valeur est %p et sa valeur est %d.\n\n", &valeur, valeur);
    int *pointeurValeur = &valeur;
    printf("Le pointeur reference l'adresse %p, la valeur pointée est %d. \n\n", pointeurValeur, *pointeurValeur);
}



void plus_n(int *p, int n) { 
    *p += n;
}




void permuter(int *pa, int *pb) {
    int pBuffer = *pa;
    *pa = *pb;
    *pb = pBuffer;
}





int compteur(char *chaine) {
    int compteur = 0;
    while(*(chaine + compteur) != '\0') {
        compteur++;
    }
    return compteur;
}





void inverser_chaine(char *chaine) {
    int nbChar = compteur(chaine);
    char charBuffer;
    for(int i = 0; i<nbChar/2; i++) {
        charBuffer = *(chaine+i);
        *(chaine+i) = *(chaine+nbChar-i-1);
        *(chaine+nbChar-i-1) = charBuffer;
    }
}





int est_palindrome(char *chaine) {
    char *chaineInversee = NULL; //on déclare le pointeur
    chaineInversee = malloc(sizeof(char)*compteur(chaine)); //on le malloc 
    strcpy(chaineInversee, chaine); //on met le contenu de chaine dans chaineInversee
    inverser_chaine(chaineInversee); //on inverse chaineInversee

    for(int i = 0; i<compteur(chaine); i++) {
        if(*(chaine+i) != *(chaineInversee+i)) {
            return 0;
        }
    }
    return 1;
}





int* generer_tableau_n_entiers(int n){
    int *tabEntier = NULL;
    tabEntier = malloc(sizeof(int)*n);

    for(int i =0; i<n; i++) {
        *(tabEntier+i) = i+1;
    }
    return tabEntier;
}




void moyenne_matiere(int nombre_notes){
    int *notes = NULL;
    notes = malloc(sizeof(int)*nombre_notes);

    int *coefficient = NULL;
    coefficient = malloc(sizeof(int)*nombre_notes);
    

    for(int i = 0; i<nombre_notes; i++) {
        printf("Entrez la note nb %d : \n", notes + i);
        scanf("%d", &notes+i);
        printf("Entrez le coefficient nb %d : \n", *coefficient + i);
        scanf("%d", &coefficient+i);
    }

    int moyenne = 0;
    printf("La moyenne est : \n\n");

    printf("%d * %d ");
    for(int i = 1; i<nombre_notes; i++) {
        printf("+ %d * %d ", coefficient+i, notes+i);
        //moyenne += coefficient+i * notes+i;
    }

    //moyenne = moyenne/compteur(notes);
    printf("= %d", moyenne);

}
