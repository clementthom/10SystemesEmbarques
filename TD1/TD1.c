#include <stdio.h>
#include <stdlib.h>


int main(char argc, char* argv[]) {

//exercice 1

    printf("Je m'appelle Clement Thomas, \n j'ai 21 ans et \n j'habite à la Rochelle.");

//exercice 2

    //déclaration des variables
    int var1 = 0;
    int var2 = 0;

    //entrée des valeurs des variables
    printf("\n\n Entrer la valeur var1 :\n\n");
    scanf("%d", &var1);
    printf("Entrer la valeur var2 :\n\n");
    scanf("%d", &var2);

    //permutation des valeurs
    int var3 = 0;
    var3 = var2;
    var2 = var1;
    var1 = var3;

    //impression des variables permutées
    printf("On a maintenant comme valeurs : \n var1 = %d \n var2 = %d \n \n", var1, var2);


//exercice 3


    //calculs de la somme, différence, produit, moyenne et la division des deux valeurs
    int somme = var1 + var2;
    int difference = var1 - var2;
    int produit = var1 * var2;
    double moyenne = (var1+var2)/2;
    double division = var1 / var2;

    printf("Voici les resultats : \n var1 : %d \n var2 : %d \n", var1, var2 );
    printf("somme : %d \ndifference : %d \nproduit : %d \nmoyenne : %lf, \ndivision : %lf", somme, difference, produit, moyenne, division);


//exercice 4

    //création des variables
    int entier1 = 0;
    int entier2 = 0;
    int entier3 = 0;

    //entrée des valeurs des variables
    printf("\n\n Entrer la valeur entier1 :\n\n");
    scanf("%d", &entier1);
    printf("Entrer la valeur entier2 :\n\n");
    scanf("%d", &entier2);
    printf("Entrer la valeur entier3 :\n\n");
    scanf("%d", &entier3);

    //affichage des valeurs par ordre croissant
    int variableTampon = 0;


//exercice 5 

    printf("\n\nExercice 5\n\n");

    //afficher les n premiers nombres pairs
    int n = 1;
    int valeurAAfficher = 0;
    while(n<=5) {
        valeurAAfficher = n*2;
        printf("%d  ", valeurAAfficher);
        n++;
    }


//exercice 6

    printf("\n\nExercice 6\n\n");

    //affichage des 5 premiers multiples de 3
    for(int i = 1; i<=5; i++) {
        printf("%d  ", i*3);
    }

    return 0;
}