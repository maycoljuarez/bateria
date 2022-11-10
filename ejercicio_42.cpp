/* nombre: ejercicio_42
autor: maycol andres juarez
lugar : ITV
instrucciones: chimba de billetes a lo random hamonos!!!!!
*/ 

#include<iostream>
using namespace std;


int main() {
	float b1;
	float b10;
	float b100;
	float b1000;
	float b20;
	float b200;
	float b5;
	float b50;
	float b500;
	float bill1;
	float bill10;
	float bill100;
	float bill1000;
	float bill20;
	float bill200;
	float bill5;
	float bill50;
	float bill500;
	int cant;
	cout << " ingrese la cantidad que desea " << endl;
	cin >> cant;
	bill100 = 100;
	bill50 = 50;
	bill10 = 10;
	bill20 = 20;
	bill200 = 200;
	bill500 = 500;
	bill1000 = 1000;
	bill5 = 5;
	bill1 = 1;
	if ((cant%1000==0)) {
		b1000 = cant/bill1000;
		cout << " la cantidad en billetes de 1000$ es igual a : " << b1000 << endl;
	}
	if ((cant%500==0)) {
		b500 = cant/bill500;
		cout << " la cantidad en billetes de 500$ es igual a : " << b500 << endl;
	}
	if ((cant%200==0)) {
		b200 = cant/bill200;
		cout << " la cantidad en billetes de 200$ es igual a : " << b200 << endl;
	}
	if ((cant%100==0)) {
		b100 = cant/bill100;
		cout << " la cantidad en billetes de 100$ es igual a : " << b100 << endl;
	}
	if ((cant%50==0)) {
		b50 = cant/bill50;
		cout << " la cantidad en billetes de 50$ es igual a : " << b50 << endl;
	}
	if ((cant%20==0)) {
		b20 = cant/bill20;
		cout << " la cantidad en billetes de 20$ es igual a : " << b20 << endl;
	}
	if ((cant%10==0)) {
		b10 = cant/bill10;
		cout << " la cantidad en billetes de 10$ es igual a : " << b10 << endl;
	}
	if ((cant%5==0)) {
		b5 = cant/bill5;
		cout << " la cantidad en monedas de 5$ es igual a : " << b5 << endl;
	}
	if ((cant%1==0)) {
		b1 = cant/bill1;
		cout << " la cantidad en monedas de 1$ es igual a : " << b1 << endl;
	}
	return 0;
}

