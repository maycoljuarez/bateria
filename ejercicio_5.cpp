/* nombre: ejercicio_5
autor: maycol andres juarez
lugar : ITV
instrucciones:  raizcuadrada y  potemcia de un numero
*/ 
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a;
	cout << " ingrese el valor " << endl;
	cin >> a;
	if ((a<=0)) {
		cout << " ERROR XXXXXX ERROR" << endl;
	} else {
		cout << "el numero es " << a << " , su potencia es " << pow(a,a) << ", su raiz cuadrada es " << sqrtf(a) << endl;
	}
	return 0;
}

