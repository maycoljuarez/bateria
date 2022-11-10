/* nombre: ejercicio_25
autor: maycol andres juarez
lugar : ITV
instrucciones: conversion de unidades de medidas
*/ 
#include<iostream>
using namespace std;


int main() {
	float c;
	float f;
	string medida;
	cout << " en que medida va a ingresar los datos ( f° o c°) " << endl;
	cin >> medida;
	if ((medida=="f")) {
		cout << "ingrese el valor de la temperatura en fharenheit" << endl;
		cin >> f;
		c = (f-32)*5/9;
		cout << " el valor en celcius es igual a " << c << "°" << endl;
	}
	if ((medida=="c")) {
		cout << "ingrese el valor de la temperatura celcius" << endl;
		cin >> c;
		f = (c*5/9)+32;
		cout << " el valor en fharenheit es igual a " << f << "°" << endl;
	}
	return 0;
}

