#include <stdio.h>
#include <stdlib.h>

int main(char argc, char* argv[]) {
    
    //initialisation chaine de caractères
    char *chaineDeCaractere = NULL;
    chaineDeCaractere = malloc(sizeof(char)*25);
    
    //remplissage de la chaine de caractères
    printf("Choisissez une chaine de caractères de moins de 25 caractères : \n");
    chaineDeCaractere = fgets(chaineDeCaractere, sizeof(char) * 25, stdin);
    chaineDeCaractere[1] = 'c';

    //impression de la chaine de caractères
    printf("\n%s", chaineDeCaractere);

    //on vide la RAM prise
    free(chaineDeCaractere);

    return 0;
}

