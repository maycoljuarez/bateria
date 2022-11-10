/* nombre: ejercicio_14
autor: maycol andres juarez
lugar : ITV
instrucciones:  media de numeros ingresados
*/ 
#include<iostream>
using namespace std;


int main() {
	float cont;
	
	int nume;
	float result;
	int sub;
	int subi;
	float sumador;
	cout << " ingrese la cantidad de numeros a mediar" << endl;
	cin >> nume;
	
	float n[nume];
	sub = 1;
	cont = 0;
	do {
		cout << " ingrese los numeros a ingresar" << endl;
		cin >> n[sub-1];
		sub = sub+1;
		cont = cont+1;
	} while (cont!=nume);
	cout << " los numeros ingresador son " << n[0] << endl;
	sumador = n[0];
	subi = 2;
	do {
		sumador = sumador+n[subi-1];
		subi = subi+1;
	} while (subi!=sub);
	cout << " la suma total es igual a " << sumador << endl;
	result = sumador/nume;
	cout << " la media es igual a " << result << endl;
	return 0;
}

