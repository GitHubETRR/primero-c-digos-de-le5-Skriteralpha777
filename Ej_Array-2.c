#include <stdio.h>
#define Tam_Vector 13


int Sum_Vec(int vec[], int tam);
float Prom_Vec(int vec[], int tam);

int main() {
    int vec[Tam_Vector];

    printf("_________________Bienvenido a mi programa_________________\n");
    printf("Necesito que me escribas 13 numeros enteros y calcularé su promedio: \n");

    for(int i = 0; i < Tam_Vector; i++) {
        printf("\n-> Numero %d: ", i + 1);
        scanf("%d", &vec[i]);
    }

    float prom = Prom_Vec(vec, Tam_Vector);

    printf("\nEl promedio es: %.2f", prom);

    return 0;
}


int Sum_Vec(int vec[], int tam) {
    int suma = 0;
    for(int i = 0; i < tam; i++) {
        suma += vec[i];
    }
    return suma;
}


float Prom_Vec(int vec[], int tam) {
    int suma = Sum_Vec(vec, tam);
    return (float)suma / tam;
}