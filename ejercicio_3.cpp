/* nombre: ejercicio_3
autor: maycol andres juarez
lugar : ITV
instrucciones: indica cual numero es mayor
*/ 
#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	int c;
	cout << " ingrese el valor uno ";
	cin >> a;
	cout << "ingrese el valor dos ";
	cin >> b;
	cout << " ingrese el valor tres ";
	cin >> c;
	if ((a>b && a>c)) {
		cout << " el valor " << a << " es el mayor" << endl;
	}
	if ((b>a && b>c)) {
		cout << " el valor " << b << " es el mayor" << endl;
	}
	if ((c>a && c>b)) {
		cout << " el valor " << c << " es el mayor " << endl;
	}
	return 0;
}

