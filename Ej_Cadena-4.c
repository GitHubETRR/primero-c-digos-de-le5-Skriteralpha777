#include <stdio.h>

void Invertir(char Origen[], char Destino[]);

int main() {
    char txt[255], in_txt[255];

    printf("_________________Bienvenido a mi programa________________\n");
    printf("Voy a invertir tu texto, mostrarlo al reves\n");

    printf("Ingrese el texto a combertir\n");
    fgets(txt, 255, stdin);

    Invertir(txt, in_txt);

    printf("\nTexto invertido %s\n", in_txt);

    return 0;
}

void Invertir(char Origen[], char Destino[]) {
    int len = 0;

    while (Origen[len] != '\0' && Origen[len] != '\n') {
        len ++;
    }

    for (int i = 0; i < len; i++) {
        Destino[i] = Origen[len - 1 - i];
    }

    Destino[len] = '\0';
}
