/* nombre: ejercicio_15
autor: maycol andres juarez
lugar : ITV
instrucciones:  contraseña tuani
*/ 
#include<iostream>
using namespace std;


int main() {
	float cont;
	string contrasena;
	cout << " por favor ingresar la contraseña para finalizar el programa ( tiene tres intentos) " << endl;
	cont = 1;
	cin >> contrasena;
	if ((contrasena=="tuani")) {
	} else {
		do {
			cout << " intento fallado numero " << cont << endl;
			cin >> contrasena;
			cont = cont+1;
		} while (!(cont>3 || contrasena=="tuani"));
	}
	return 0;
}

