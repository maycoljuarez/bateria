
/* nombre: ejercicio_12
autor: maycol andres juarez
lugar : ITV
instrucciones:  sumador de numeros
*/ 
#include<iostream>
using namespace std;


int main() {
	float i;
	float n;
	float sumador;
	cout << " escribe la cantidad de numeros a sumar ";
	cin >> n;
	sumador = 0;
	i = 1;
	do {
		sumador = sumador+i;
		i = i+1;
	} while (i<=n);
	cout << " la cantidad total de la suma es igual a " << sumador << endl;
	return 0;
}

