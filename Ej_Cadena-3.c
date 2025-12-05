#include <stdio.h>

void pasaMinusculas(char texto[]);
int vocales(char texto[]);

int main() {
    char txt[255];

    printf("_______________Bienvenido a mi programa______________\n");
    printf("Voy a convertir un texto a minusculas y contar cuantas vocales poseen\n");

    printf("Ingrese el texto\n");
    fgets(txt, 255, stdin);

    pasaMinusculas(txt);

    int C_Voc = vocales(txt);

    printf("\nEl texto en minuscula: %s", txt);
    printf("Cantidad de vocales: %d\n", C_Voc);

    return 0;
}

void pasaMinusculas(char texto[]) {
    int i = 0;
    while (texto[i] != '\0') {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = texto[i] + 32;
        }
        i ++;
    }
}

int vocales(char texto[]) {
    int cont = 0;
    int i = 0;

    while (texto[i] != '\0') {
        if (texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u') {
            cont ++;
        }
        i ++;
    }
    return cont;
}
