#include <stdio.h>

void pasaMinuscula(char texto[]);

int main() {
    char txt[255];

    printf("_______________Bienvenido a mi programa_______________\n");
    printf("Ahora voy a convertir lo que escribas a minusculas.\n");

    printf("Ingrese el texto\n");
    fgets(txt, 255, stdin);

    pasaMinuscula(txt);

    printf("\nTexto en minuscula: %s\n", txt);

    return 0;
}

void pasaMinuscula(char texto[]) {
    int i = 0;
    while (texto[i] != '\0') {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = texto[i] + 32;
        }
        i++;
    }
}
