/* nombre: ejercicio_21
autor: maycol andres juarez
lugar : ITV
instrucciones: triangulo
*/ 
#include<iostream>
using namespace std;


int main() {
	int altura;
	float cont;
	float line;

	cout << " escribe la altura del triangulo" << endl;
	cin >> altura;
	line = 0;
	do {
		cont = 0;
		do {
			cout << "* ";
			cont = cont+1;
		} while (cont!=altura);
		cout << " " << endl;
		line = line+1;
		altura = altura-1;
	} while (altura!=0);
	return 0;
}

