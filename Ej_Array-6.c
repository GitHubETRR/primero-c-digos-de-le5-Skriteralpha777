#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Tam_Vector 20

void CargaVector(int v[], int n);
void InvertirVector(int origeng[], int destino[], int n);
void MostrarVector(int v[], int n);

int main() {
    printf("_________________Bienvenido a mi programa_________________\n");
    printf("En este va a invertir un vector aleatorio.\n");
    
    int VecA[Tam_Vector];
    int VecB[Tam_Vector];

    srand(time(NULL)); 

    CargaVector(VecA, Tam_Vector);
    InvertirVector(VecA, VecB, Tam_Vector);

    printf("\n--> Vector generado:\n");
    MostrarVector(VecA, Tam_Vector);

    printf("\n--> Vector invertido:\n");
    MostrarVector(VecB, Tam_Vector);

    return 0;
}

void CargaVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = 20 + rand() % 71; 
    }
}

void InvertirVector(int origen[], int destino[], int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origen[n - 1 - i];
    }
}

void MostrarVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
