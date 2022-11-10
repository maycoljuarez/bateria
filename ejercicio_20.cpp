/* nombre: ejercicio_20
autor: maycol andres juarez
lugar : ITV
instrucciones: cuadro de *
*/ 

#include<iostream>
using namespace std;




int main() {
	float cont;
	int lado;
	float line;
	cout << " escribe el tamaño de los lados del cuadra" << endl;
	cin >> lado;
	line = 0;
	do {
		cont = 0;
		do {
			cout << "*";
			cont = cont+1;
		} while (cont!=lado);
		cout << " "  << endl;
		line = line+1;
	} while (line!=lado);
	return 0;
}

