/* nombre: ejercicio_40
autor: maycol andres juarez
lugar : ITV
instrucciones: valores a y b
*/ 

#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	float partinf;
	float partsu;
	float result;
	do {
		cout << "ingrese el valor de A :" << endl;
		cin >> a;
	} while ((a<0));
	do {
		cout << " ingrese el valor de B" << endl;
		cin >> b;
	} while ((b<0));
	partsu = a;
	partinf = ((a-b)*b);
	result = partsu/partinf;
	cout << " el resultado es igual a " << result << endl;
	return 0;
}

