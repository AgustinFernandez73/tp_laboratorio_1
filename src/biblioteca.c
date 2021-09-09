#include "biblioteca.h"

int SumarNumeros(int unNumero, int otroNumero) {
	int resultado;

	resultado = unNumero + otroNumero;

	return resultado;
}

int RestarNumeros(int unNumero, int otroNumero) {
	int resultado;

	resultado = unNumero - otroNumero;

	return resultado;
}

int MultiplicarNumeros (int unNumero, int otroNumero) {
	int resultado;

	resultado = unNumero * otroNumero;

	return resultado;
}

int DividirNumeros (int unNumero, int otroNumero) {
	int resultado;

	if (otroNumero != 0) {
		resultado = unNumero / otroNumero;
	}

	return resultado;
}

long int FactorizarNumero (int unNumero) {
	int resultado = 1;
	int contador;

	for (contador = unNumero; contador > 1; contador--) {
		resultado = resultado * contador;
	}

	return resultado;

}
