using namespace std;
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>

#include "functions.h"

#include "../iControlador/IControlador.h"
#include "../fabrica/Fabrica.h"


void mostrar_menu_principal() {
	cout << "╔════════════════╗\n";
	cout << "║ Menú principal ║\n";
	cout << "╚════════════════╝\n";
	cout << "  1. Gestión de Usuarios\n";
	cout << "  2. Gestión de Hostales\n";
	cout << "  3. Gestión de Reservas\n";
	cout << "  4. Gestión de Estadías\n";
	cout << "  5. Modificar fecha del sistema\n";
	cout << "  6. Cargar de Datos de Prueba\n";
	cout << "  7. Salir\n";
}

int eleccion_menu_principal() {
	/* 
	Para evitar que el menu entre en bucle cuando el usuario ingrese
	una cadena de texto donde deberia ir un int se toman las siguientes medidas.

	Se crea una 'cadena_inicio' que contiene como base un texto que al ser
	convertido con stoi() da como resultado el valor entero 0.

	La explicacion viene de que cuando agregemos la entrada del usuario,
	si el mismo ingresase solo texto, la funcion stoi() devolveria un
	error, con esto implementado si el usuario ingresa un valor no valido
	se leera siempre el 0 como opcion default
	*/
	string cadena_inicio = "0";
	string cadena_agregada = "";

	mostrar_menu_principal();
	do{
	cout << ("Ingresa una opción(1..7): ");
	cin >> cadena_agregada;

	if (stoi(cadena_inicio + cadena_agregada) < 1 || stoi(cadena_inicio + cadena_agregada) > 7){
		cout << "La opción que has ingresado no es válida. Inténtalo otra vez.\n";
	}
	}

	while(stoi(cadena_inicio + cadena_agregada) < 1 || stoi(cadena_inicio + cadena_agregada) > 7);

	return stoi(cadena_inicio + cadena_agregada);
}

//void modificar_fecha(){}