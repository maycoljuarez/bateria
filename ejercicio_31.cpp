/* nombre: ejercicio_31
autor: maycol andres juarez
lugar : ITV
instrucciones: divisores
*/ 


#include<iostream>
using namespace std;



int main() {
	int j;
	int n;
	cout << " escriba el valor a buscar divisores" << endl;
	cin >> n;
	j = 2;
	do {
		if ((n%j==0)) {
			cout << " uno de sus divisores es " << j << endl;
		}
		j = j+1;
	} while (j<=10);
	return 0;
}

