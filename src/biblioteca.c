#include "biblioteca.h"

float SumarNumeros(float unNumero, float otroNumero) {
	float resultado;

	resultado = unNumero + otroNumero;

	return resultado;
}

float RestarNumeros(float unNumero, float otroNumero) {
	float resultado;

	resultado = unNumero - otroNumero;

	return resultado;
}

float MultiplicarNumeros (float unNumero, float otroNumero) {
	int resultado;

	resultado = unNumero * otroNumero;

	return resultado;
}

float DividirNumeros (float unNumero, float otroNumero) {
	float resultado;

	if (otroNumero != 0) {
		resultado = unNumero / otroNumero;
	}

	return resultado;
}

unsigned long long FactorizarNumero (int unNumero) {
	unsigned long long resultado = 1;
	int contador;

	for (contador = unNumero; contador > 1; contador--) {
		resultado = resultado * contador;
	}

	return resultado;

}
