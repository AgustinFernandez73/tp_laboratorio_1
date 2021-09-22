

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_
#include <stdio.h>


/// @fn float SumarNumeros(float, float)
/// @brief Recibe dos numeros y retorna el resultado de la suma de ambos
///
/// @param Primer numero ingresado que va a sumarse
/// @param Segundo numero ingresado que va a sumarse
/// @return Retorno el resultado de la suma
float SumarNumeros (float, float);


/// @fn float RestarNumeros(float, float)
/// @brief Recibe dos numeros y retorna el resultado de la resta de ambos
///
/// @param Primer numero ingresado que va a restarse
/// @param Segundo numero ingresado que va a restarse
/// @return Retorno el resultado de la resta
float RestarNumeros (float, float);


/// @fn float MultiplicarNumeros(float, float)
/// @brief Recibe dos numeros y retorna el resultado de la multiplicacion de ambos
///
/// @param Primer numero ingresado que va a multiplicarse
/// @param Segundo numero ingresado que va a multiplicarse
/// @return Retorno el resultado de la multiplicacion
float MultiplicarNumeros (float, float);


/// @fn float DividirNumeros(float, float)
/// @brief Recibe dos numeros y retorna el resultado de la division de ambos
///
/// @param Primer numero ingresado que va a dividirse
/// @param Segundo numero ingresado que va a dividirse (Mayor a 0)
/// @return Retorno el resultado de la division
float DividirNumeros (float, float);



/// @fn unsigned long long FactorizarNumero(int)
/// @brief Recibe un numero y retorna el resultado de la factorizacion
///
/// @param Numero ingresado que va a factorizarse
/// @return Retorno el resultado de la factorizacion
unsigned long long FactorizarNumero (int);

#endif
