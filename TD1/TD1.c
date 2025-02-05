#include <stdio.h>
#include <stdlib.h>


int main(char argc, char* argv[]) {

//exercice 1

    printf("Je m'appelle Clement Thomas, \n j'ai 21 ans et \n j'habite à la Rochelle.");

//exercice 2

    //déclaration des variables
    int var1 = 0;
    int var2 = 0;

    //entrer des valeurs des variables
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
    int moyenne = (var1+var2)/2;
    int division = var1 / var2;

    printf("Voici les resultats : \n var1 : %d \n var2 : %d \n", var1, var2 );
    printf("somme : %d \ndifference : %d \nproduit : %d \nmoyenne : %d, \ndivision : %d", somme, difference, produit, moyenne, division);


    return 0;


//exercice 4

    
}