#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define NMAX 100

int rta;

int menu();
void Code1();
void Code2();
void Code3();

int main() {
	rta = menu();

	if(rta == 1) {
		Code1();
	}
	if(rta == 2) {
		Code2();
	}
	if(rta == 3) {
		Code3();
	}

	return 0;
}

int menu() {
	do {
		printf("________Bienvenido a mi codigo_________\n");
		printf("Presiona 1: Multiplos\n");
		printf("Presiona 2: Adivina el numero\n");
		printf("Presiona 3: Salir\n");
		scanf("%d",&rta);
	}
	while((rta != 1 && rta != 2 && rta != 3));
	return rta;
}

void Code1() {
	int num;
	int num_Mul;

	do {
		printf("\nDecime un número (no 0 o menor)\n");
		scanf("%d\n",&num);
		printf("Decime el numero del que crees que puede ser multiplo\n");
		scanf("%d\n",&num_Mul);
	}while(num<=0);
	int Modulo = num%num_Mul;
	int h;
	if (h!=0) {
	    printf("Es multiplo");
	}else{
	    printf("No es multiplo");
	}
	    
}

void Code2() {
	int num2;
	int numSecreto;
    int cantidadDeIntentos=1;
    
	printf("\n2-- Tengo un numero del 1 al %d para que adivines\n", NMAX);
	srand(time(NULL));
	numSecreto = rand() % NMAX + 1;

	do {
		do {
			printf("Cual es tu intento?\n");
			scanf("%d",&num2);
		}
		while((num2<=0)||(num2>NMAX));
        
		if(num2>numSecreto) {
		    printf("\n--Intento numero: %d\n",cantidadDeIntentos++);
			printf("\nTe pasaste del numero\n");
		}
		if(num2<numSecreto) {
		    printf("\n--Intento numero: %d\n",cantidadDeIntentos++);
			printf("\nTe falta para llegar al numero\n");
		}
		
	}
	while(num2!=numSecreto);
	printf("\n---- Felicidades adivinaste el numero en %d intentos ----\n",cantidadDeIntentos);
}

void Code3() {
	printf("\nFin del programa \n");
}