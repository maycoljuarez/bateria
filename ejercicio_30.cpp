/* nombre: ejercicio_30
autor: maycol andres juarez
lugar : ITV
instrucciones: buscador de numero 

*/ 
#include<iostream>
using namespace std;



int main() {
	int busc;
	int i;
	int j;
	int posic[10];
	i = 1;
	do {
		cout << " ingresa el  numero " << i << endl;
		cin >> posic[i-1];
		i = i+1;
	} while (i<=10);
	cout << "cual es el numero que desa buscar" << endl;
	cin >> busc;
	j = 1;
	do {
		if ((posic[j-1]==busc)) {
			cout << " numero encontrado en la posicion " << j << " y es de " << posic[j-1] << endl;
		}
		j = j+1;
	} while (j<=10);
	return 0;
}

