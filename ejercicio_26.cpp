/* nombre: ejercicio_26
autor: maycol andres juarez
lugar : ITV
instrucciones: multiplicadores
*/ 
#include<iostream>
using namespace std;


int main() {
	float acumul;
	int cant;
	int i;

	cout << " escribe la cantidad de numeros a multiplicar" << endl;
	cin >> cant;
	i = 1;
		int num[cant];
	
	acumul = 1;
	do {
		cout << " *******escribe el valor numero : " << i << " :********" << endl;
		cin >> num[i-1];
		cout << " el valor " << i << " es igual a " << num[i-1] << endl;
		acumul = acumul*i;
		cout << " el valor " << i-1 << " por el valor " << i << " es igual a " << acumul << endl;
		i = i+1;
	} while (i<=cant);
	return 0;
}

