/* nombre: ejercicio_32
autor: maycol andres juarez
lugar : ITV
instrucciones: maximo comun divisor
*/ 
#include<iostream>
using namespace std;



int main() {
	int a;
	int b;
	int divisor;
	int mcd;
	mcd = 1;
	cout << " ingrese el primer numero " << endl;
	cin >> a;
	cout << " ingrese el segundo numero " << endl;
	cin >> b;
	if ((a<0)) {
		a = -a;
	}
	if (b<0) {
		b = -b;
	}
	divisor = 2;
	while ((divisor<=a && divisor<=b)) {
		while (a%divisor==0 && b%divisor==0) {
			mcd = mcd*divisor;
			a = a/divisor;
			b = b/divisor;
		}
		divisor = divisor+1;
	}
	cout << " el maximo comun divisor es " << mcd << endl;
	return 0;
}

