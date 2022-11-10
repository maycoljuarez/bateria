/* nombre: ejercicio_17
autor: maycol andres juarez
lugar : ITV
instrucciones:  media de numeros ingresados
*/ 
#include<iostream>
using namespace std;


int main() {
	int cont;
	int i;
	int n[100];
	i = 1;
	cont = 1;
	cout << "los numeros multiplos del 3 son " << endl;
	do {
		if ((cont%3==0)) {
			cout << cont << " ";
		}
		i = i+1;
		cont = cont+1;
	} while (cont!=100);
	cont = 1;
	cout << "los numeros multiplos del 2 son " << endl;
	do {
		if ((cont%2==0)) {
			cout << cont << " ";
		}
		i = i+1;
		cont = cont+1;
	} while (cont!=100);
	return 0;
}

