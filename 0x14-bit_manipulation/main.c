#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generatePasswords(char *password, int length, int pos, char *script, int *found, char *characterSet, int characterSetLength);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Utilisation : %s <script> <longueur_max_mdp>\n", argv[0]);
        return 1;
    }

    char *script = argv[1];  // Nom du script passé en paramètre
    int maxPasswordLength = atoi(argv[2]);  // Longueur maximale du mot de passe

    char *password = (char *)malloc(maxPasswordLength + 1);  // Allouer de la mémoire pour le mot de passe
    memset(password, 0, maxPasswordLength + 1);  // Initialiser le mot de passe à une chaîne vide

    FILE *fp;
    char command[1000];
    int found = 0;

    char characterSet[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int characterSetLength = strlen(characterSet);

    for (int length = 1; length <= maxPasswordLength; length++) {
        generatePasswords(password, length, 0, script, &found, characterSet, characterSetLength);
        if (found) {
            break;
        }
    }

    if (!found) {
        printf("Aucun mot de passe trouvé.\n");
    }

    free(password);  // Libérer la mémoire allouée pour le mot de passe

    return 0;
}

void generatePasswords(char *password, int length, int pos, char *script, int *found, char *characterSet, int characterSetLength) {
    if (pos == length) {
        // Exécuter le script avec le mot de passe actuel
        FILE *fp;
        char command[1000];
	printf("Test: %s\n",password);
        sprintf(command, "%s %s", script, password);
        fp = popen(command, "r");
        if (fp) {
            char buffer[100];
            if (fgets(buffer, sizeof(buffer), fp) != NULL) {
                if (strcmp(buffer, "ko\n") != 0) {
                    printf("Mot de passe trouvé : %s\n", password);
                    *found = 1;
                }
            }
            pclose(fp);
        }
        return;
    }

    for (int i = 0; i < characterSetLength; i++) {
        char c = characterSet[i];
        password[pos] = c;
        generatePasswords(password, length, pos + 1, script, found, characterSet, characterSetLength);
        if (*found) {
            return;
        }
    }
}
