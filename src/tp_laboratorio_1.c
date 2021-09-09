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
	int resultadoFactorizarA;
	int resultadoFactorizarB;

	int flagX = 1;
	int flagY = 1;

	do {

		printf("--------MENU DE OPCIONES---------\n");

		if (flagX) {
			printf("1. Ingresar 1er operando (A = x)\n");
		} else {
			printf("1. Ingresar 1er operando (A = %.2f)\n", x);
		}

		if (flagY) {
		    printf("2. Ingresar 2do operando (B = y)\n");
		} else {
			printf("2. Ingresar 2do operando (B = %.2f)\n", y);
		}

		printf("3. Calcular todas las operaciones\n");
		printf("4. Informar resultados\n");
		printf("5. Salir\n");
		printf("---------------------------------\n");
		printf("¿Que opción desea realizar?: ");
		scanf("%d", &opcion);

		switch (opcion) {
		case 1:
			printf("Ingrese el primer numero: ");
			scanf("%f", &x);
			printf("A = %.2f\n", x);
			flagX = 0;
			break;
		case 2:
			printf("Ingrese el segundo numero: ");
			scanf("%f", &y);
			printf("B = %.2f\n", y);
			flagY = 0;
			break;
		case 3:
			printf("Calcular la suma           (%.2f + %.2f)\n", x, y);
			resultadoSuma = SumarNumeros(x, y);
			printf("Calcular la resta          (%.2f - %.2f)\n", x, y);
			resultadoResta = RestarNumeros(x, y);
			printf("Calcular la division       (%.2f / %.2f)\n", x, y);
			resultadoDivision = DividirNumeros(x, y);
			printf("Calcular la multiplicacion (%.2f * %.2f)\n", x, y);
			resultadoMultiplicacion = MultiplicarNumeros(x, y);
			printf("Calcular el factorial    (%.2f! y %.2f!)\n", x, y);
			resultadoFactorizarA = FactorizarNumero(x);
			resultadoFactorizarB = FactorizarNumero(y);
			break;
		case 4:
			printf("El resultado de %.2f + %.2f es: %.2f\n", x, y,
					resultadoSuma);
			printf("El resultado de %.2f - %.2f es: %.2f\n", x, y,
					resultadoResta);
			printf("El resultado de %.2f / %.2f es: %.2f\n", x, y,
					resultadoDivision);
			printf("El resultado de %.2f * %.2f es: %.2f\n", x, y,
					resultadoMultiplicacion);
			printf("El factorial de %.2f es %d y el factorial de %.2f es %d\n", x, resultadoFactorizarA, y, resultadoFactorizarB);
			break;
		case 5:
			printf("Gracias por usar la calculadora");
			break;
		}

	} while (opcion != 5);

	return EXIT_SUCCESS;
}
