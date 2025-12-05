#include <stdio.h>

#define Tam_Vector 13


int Sum_Vec(int vec[], int Tam);

int main() {
	int vec[Tam_Vector];
	int res = 0;

	printf("______________Bienvenido a mi programa____________\n");
	printf("Necesito que me escribas 13 numeros enteros para sumarlos, despues te digo el resultado.\n");

	for(int i = 0; i < Tam_Vector; i++) {
		printf("\n-> Numero %d: ", i + 1);
		scanf("%d", &vec[i]);
	}

	res = Sum_Vec(vec, Tam_Vector);

	printf("\nEl resultado es: %d", res);

	return 0;
}

int Sum_Vec(int vec[], int Tam) {
	int suma = 0;
	for(int i = 0; i < Tam; i++) {
		suma += vec[i];
	}
	return suma;
}