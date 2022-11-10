/* nombre: ejercicio_16
autor: maycol andres juarez
lugar : ITV
instrucciones:  media, max y min
*/ 
#include<iostream>
using namespace std;



int main() {
	int a;
	int b;
	int mayorr;
	int menr;
	float promedio1;
	float suma1;
	float x;
	x = 1;
	a = 0;
	b = 0;
	suma1 = 0;
	promedio1 = 0;
	mayorr = 0;
	while (x!=0) {
		cout << " ingrese un numero " << endl;
		cin >> x;
		if (x!=0) {
			a = a+1;
			if (x>0) {
				b = b+1;
				suma1 = suma1+x;
				promedio1 = suma1/b;
			}
		}
		if ((mayorr<x)) {
			mayorr = x;
		}
		if ((a<menr)) {
			a = menr;
		}
	}
	cout << " el total de numero es de : " << a << endl;
	cout << " la media es igual a: " << promedio1 << endl;
	cout << " el numero mayor es igual a " << mayorr << endl;
	cout << " el numero menr es  igual a " << menr << endl;
	return 0;
}

