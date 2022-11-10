/* nombre: ejercicio_24
autor: maycol andres juarez
lugar : ITV
instrucciones: ecuaciones de segundo grado
*/ 
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a;
	float b;
	float c;
	float valora;
	float valorb;
	float x;
	float xa;
	float xb;
	cout << " ________________________-PROGRAMA PARA ECUACIONES DE SEGUNDO GRADO________________" << endl;
	cout << " ingrese el valor de a" << endl;
	cin >> a;
	cout << " ingrese el valor de b" << endl;
	cin >> b;
	cout << " ingrese el valor de c" << endl;
	cin >> c;
	x = (b*b)-4*a*c;
	if ((x<0)) {
		cout << " no se puede resolvero por ser negativo" << endl;
	} else {
		xa = (-b+sqrtf(x))/(2*a);
		xb = (-b-sqrtf(x))/(2*a);
	}
	cout << " el resultado para formula con resultado positivo es igual a " << xa << endl;
	cout << " el resultado para la formula con resultado negativo es igual a " << xb << endl;
	return 0;
}

