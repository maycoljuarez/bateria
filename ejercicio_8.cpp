/* nombre: ejercicio_8
autor: maycol andres juarez
lugar : ITV
instrucciones:  saber si el numero es par o impar
*/ 
#include<iostream>
using namespace std;


int main() {
	int a;
	cout << "ingrese el numero " << endl;
	cin >> a;
	if ((a>0)) {
		if ((a%2==0)) {
			cout << " el numero es par" << endl;
		} else {
			cout << " el numero es impar" << endl;
		}
	}
	if ((a==0)) {
		cout << " el numero no es par ni impar" << endl;
	}
	return 0;
}

