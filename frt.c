#include <stdio.h>

int main() {
    int taille;

    //demander la taille du tableau
    printf("Entrez la taille des tableaux : ");
    scanf("%d", &taille);

    // Déclaration
    int tableau1[taille];
    int tableau2[taille];
    int tableauSomme[taille];

    // remplissage premier tableau
    printf("Entrez les elements du premier tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau1[i]);
    }

    // remplissage du deuxième tableau
    printf("Entrez les élémen du deuxième tableau  :\n");
    for (int i = 0; i < taille; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau2[i]);
    }

    // somme  tableaux
    for (int i = 0; i < taille; i++) {
        tableauSomme[i] = tableau1[i] + tableau2[i];
    }

    // Affichage
    printf("Le tableau de somme est : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableauSomme[i]);
    }

    return 0;
}
