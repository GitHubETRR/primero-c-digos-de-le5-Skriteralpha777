#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Tam_Vector 7

int VecA[Tam_Vector];
int VecB[Tam_Vector];

int ProdEsc();

int main() {
	srand(time(NULL));

	printf("_________________Bienvenido a mi programa_______________\n");
	printf("En este código resolvera el producto escalar de 2 vectores.\n");


	printf("Componentes del Vector A:\n");
	for (int i = 0; i < Tam_Vector; i++) {
		VecA[i] = rand() % (30 + 1) + 1;
		printf("A%d = %d\n", i + 1, VecA[i]);
	}


	printf("\nComponentes del Vector B:\n");
	for (int i = 0; i < Tam_Vector; i++) {
		VecB[i] = rand() % (30 + 1) + 1;
		printf("B%d = %d\n", i + 1, VecB[i]);
	}


	int res = ProdEsc();

	printf("\nEl resultado del producto escalar entre los vectores A y B es de %d \n", res);

	return 0;
}


int ProdEsc() {
	int tot = 0;

	for (int i = 0; i < Tam_Vector; i++) {
		tot += (VecA[i] * VecB[i]);
	}

	return tot;
}