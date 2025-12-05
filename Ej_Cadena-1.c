#include <stdio.h>

int Dimension(char texto[]);

int main() {
    char txt[255];

    printf("_______________Bienvenido a mi programa_____________ \n");
    printf("Ahora no tendra que contar caracteres, este programa lo ayudara!! \n");
    printf("Escribi un texto y voy a decirle su cantidad de caracteres (espacios incluidos)\n");

    printf("Ingrese el texto \n");
    fgets(txt, 255, stdin);

    int long1 = Dimension(txt);

    printf("\nEl largo del texto es: %d\n", long1);

    return 0;
}

int Dimension(char texto[]) {
    int i = 0;
    while (texto[i] != '\0' && texto[i] != '\n') {
        i++;
    }
    return i;
}
