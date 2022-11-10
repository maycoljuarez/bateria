/* nombre: ejercicio_2
autor: maycol andres juarez
lugar : ITV
instrucciones: determina quien es mayor de los valores
*/ 
#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	cout << " ingrese el valor uno ";
	cin >> a;
	cout << "ingrese el valor dos ";
	cin >> b;
	if ((a>b)) {
		cout << " el valor " << a << " es mayor que " << b << endl;
	}
	if ((b>a)) {
		cout << "el valor " << b << " es mayor que " << a << endl;
	}
	if ((a==b)) {
		cout << " los valores uno y dos son iguales" << endl;
	}
	return 0;
}

