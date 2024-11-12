#include <stdio.h>

void copie(char *dest, const char *source) {
    int i = 0; // Initialiser un index pour parcourir les caractères

    // Copier chaque caractère de source dans dest jusqu'à trouver '\0'
    while (source[i] != '\0') {
        dest[i] = source[i]; // Copier le caractère courant de source dans dest
        i++; // Passer au caractère suivant
    }

    // Ajouter le caractère nul '\0' à la fin de dest
    dest[i] = '\0';
}

int main() {
    char source[] = "Copie ceci"; // Définir la chaîne source
    char dest[20]; // Assurez-vous que dest est assez grand pour la copie
    copie(dest, source); // Appeler la fonction pour copier
    printf("Contenu de dest : %s\n", dest); // Afficher le résultat
    return 0;
}