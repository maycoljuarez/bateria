/* nombre: ejercicio_10
autor: maycol andres juarez
lugar : ITV
instrucciones:  titulado de bachillerato, tieno o no tiene
*/ 
#include<iostream>
using namespace std;


int main() {
	string admision;
	string titulo;
	cout << " usted tiene titulo de bachillerato (si o no)? " << endl;
	cin >> titulo;
	if ((titulo=="no")) {
		cout << " entonces usted a pasado el examen de admision(si o no)" << endl;
		cin >> admision;
	}
	if ((titulo=="si")) {
		cout << " puede usted aplicar a una de nuestras carreras!!!" << endl;
	}
	if ((admision=="no")) {
		cout << " lo siento mucho usted no puede aplicar a alguna de nuestras ofertas" << endl;
	}
	if ((admision=="si")) {
		cout << " uede usted aplicar a una de nuestras carreras!!!" << endl;
	}
	return 0;
}

