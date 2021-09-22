/*
 ============================================================================
 Agustin Pablo Fernandez

 TP LABORATORIO 1

 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	float x;
	float y;

	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;
	unsigned long long resultadoFactorizarA;
	unsigned long long resultadoFactorizarB;

	int flagX = 1;
	int flagY = 1;
	int flagCalculos = 1;

	int validacionNum;


	do {

		printf("\n|════════ MENU DE OPCIONES ════════════|\n");

		if (flagX) {
			printf("| 1. Ingresar 1er operando (A = x)     |\n");
		} else {
			printf("| 1. Ingresar 1er operando (A = %.2f) |\n", x);
		}

		if (flagY) {
			printf("| 2. Ingresar 2do operando (B = y)     |\n");
		} else {
			printf("| 2. Ingresar 2do operando (B = %.2f)  |\n", y);
		}

		printf("| 3. Calcular todas las operaciones    |\n"
				"| 4. Informar resultados               |\n"
				"| 5. Salir                             |\n"
				"|______________________________________|\n"
				"\n¿Que opción desea realizar?: ");
		validacionNum = scanf("%d", &opcion);
		while(!validacionNum || opcion < 1 || opcion > 5) {
			printf("ERROR. Ingrese una opcion valida: ");
			fflush(stdin);
			validacionNum = scanf("%d", &opcion);
		}

		switch (opcion) {

		case 1:
			printf("-------------------------------\n"
					"Ingrese el primer numero: ");
			validacionNum = scanf("%f", &x);
			while(!validacionNum) {
				printf("ERROR, Reingrese numero: ");
				fflush(stdin);
				validacionNum = scanf("%f", &x);
			}
			printf("A = %.2f\n", x);
			flagX = 0;
			break;

		case 2:
			printf("---------------------------------\n"
					"Ingrese el segundo numero: ");
			validacionNum = scanf("%f", &y);
			while(!validacionNum) {
				printf("ERROR, Reingrese numero: ");
				fflush(stdin);
				validacionNum = scanf("%f", &y);
			}
			printf("B = %.2f\n", y);
			flagY = 0;
			break;

		case 3:
			if (flagX == 1 || flagY == 1) {
				printf("---------------------------------\n"
						"No se ingresaron los dos numeros\n");
			} else {
				printf("----------------------------------------\n");
				printf("Calcular la suma           (%.2f + %.2f)\n", x, y);
				resultadoSuma = SumarNumeros(x, y);
				printf("Calcular la resta          (%.2f - %.2f)\n", x, y);
				resultadoResta = RestarNumeros(x, y);
				printf("Calcular la division       (%.2f / %.2f)\n", x, y);
				if (y != 0) {
					resultadoDivision = DividirNumeros(x, y);
				}
				printf("Calcular la multiplicacion (%.2f * %.2f)\n", x, y);
				resultadoMultiplicacion = MultiplicarNumeros(x, y);
				printf("Calcular el factorial    (%.2f! y %.2f!)\n", x, y);
				if (x >= 0) {
					resultadoFactorizarA = FactorizarNumero(x);
				}
				if (y >= 0) {
					resultadoFactorizarB = FactorizarNumero(y);
				}
				flagCalculos = 0;
			}
			break;

		case 4:
			if (flagCalculos == 1) {
				printf("---------------------------------\n"
						"No se han realizado los calculos\n");
			} else {
				printf("------------------------------------\n");
				printf("El resultado de %.2f + %.2f es: %.2f\n", x, y, resultadoSuma);
				printf("El resultado de %.2f - %.2f es: %.2f\n", x, y, resultadoResta);
				if (y != 0) {
					printf("El resultado de %.2f / %.2f es: %.2f\n", x, y, resultadoDivision);
				} else {
					printf("No se puede dividir por 0\n");
				}
				printf("El resultado de %.2f * %.2f es: %.2f\n", x, y, resultadoMultiplicacion);

				if (x >= 0 && y >= 0) {
					printf("El factorial de %.2f es %I64u y el factorial de %.2f es %I64u\n", x, resultadoFactorizarA, y, resultadoFactorizarB);
				} else if (x >= 0) {
					printf("El factorial de %.2f es %I64u. No se puede calcular el factorial de %.2f\n", x, resultadoFactorizarA, y);
				} else if (y >= 0) {
					printf("El factorial de %.2f es %I64u. No se puede calcular el factorial de %.2f\n", y, resultadoFactorizarB, x);
				} else {
					printf("No se puede calcular el factorial de %.2f y el factorial de %.2f\n", x, y);
				}
			}
			break;

		case 5:
			printf("___________________________________\n"
					"| Gracias por usar la calculadora |\n"
					"|_________________________________|");
			break;
		}

	} while (opcion != 5);

	return EXIT_SUCCESS;
}
