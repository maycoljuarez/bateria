/* nombre: ejercicio_11
autor: maycol andres juarez
lugar : ITV
instrucciones:  el cuadrado de los primeros 9 numeros
*/ 
#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float contador;
	string iniciar;
	float num;
	cout << " iniciar el programa(Y o N?" << endl;
	cin >> iniciar;
	if ((iniciar=="Y" || iniciar=="y")) {
		contador = 0;
		num = 1;
		do {
			cout << pow(num,2) << "    ";
			contador = contador+1;
			num = num+1;
		} while (contador!=9);
	} else {
		cout << " ok" << endl;
	}
	return 0;
}

