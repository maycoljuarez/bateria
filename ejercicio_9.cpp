/* nombre: ejercicio_9
autor: maycol andres juarez
lugar : ITV
instrucciones:  repetir si es 0, sino igual a impar o par
*/ 
#include<iostream>
using namespace std;



int main() {
	int a;
	do {
		cout << "ingrese el numero " << endl;
		cin >> a;
	} while (a<=0);
	if ((a>0)) {
		if ((a%2==0)) {
			cout << " el numero es par" << endl;
		} else {
			cout << " el numero es impar" << endl;
		}
	}
	return 0;
}

