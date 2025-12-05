#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Tam_Vector 50
#define Min 10

int Cont_M(int vec[], int tam);

int main() {
	int vec[Tam_Vector];

	srand(time(NULL));

	printf("Se generaran 50 valores entre 10 y 20\n");

	for (int i = 0; i < Tam_Vector; i++) {
		vec[i] = rand() % (Min + 1) + Min;
	printf("[%d] = %d           ", i + 1, vec[i]);
	}


	int rep = Cont_M(vec, Tam_Vector);

	printf("\nEl numero mayor se repite %d veces.\n", rep);

	return 0;
}




int Cont_M(int vec[], int tam) {
	int Mayor = vec[0];
	int rep = 0;


	for (int i = 1; i < tam; i++) {
		if (vec[i] > Mayor) {
			Mayor = vec[i];
		}
	}


	for (int i = 0; i < tam; i++) {
		if (vec[i] == Mayor) {
			rep++;
		}
	}

	return rep;
}
