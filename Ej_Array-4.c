#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Tam_Vector 100

int vec[Tam_Vector];
int NumMax, NumMin;

int EncMax();
int EncMin();
void Pos_Max(int Max);

int main() {
    srand(time(NULL));

    printf("________________Bienvenido a mi programa________________\n");
    printf("Se generarán 100 valores entre 10 y 40\n");


    for (int i = 0; i < Tam_Vector; i++) {
        vec[i] = rand() % (40 - 10 + 1) + 10;
        printf("[%d] = %d           ", i + 1, vec[i]);
    }

  
    NumMax = EncMax();
    NumMin = EncMin();

    printf("\nEl número máximo del vector es: %d\n",NumMax);
    printf("El número mínimo que aparece es: %d\n", NumMin);

    printf("El número máximo aparece en las pocisiones:");
    Pos_Max(NumMax);

    return 0;
}


int EncMax() {
    int max = vec[0];

    for (int i = 1; i < Tam_Vector; i++) {
        if (vec[i] > max) {
            max = vec[i];
        }
    }
    return max;
}


int EncMin() {
    int min = vec[0];

    for (int i = 1; i < Tam_Vector; i++) {
        if (vec[i] < min) {
            min = vec[i];
        }
    }
    return min;
}


void Pos_Max(int Max) {
    for (int i = 0; i < Tam_Vector; i++) {
        if (vec[i] == Max) {
            printf("Vector[%d] = %d\n", i + 1, Max);
        }
    }
}