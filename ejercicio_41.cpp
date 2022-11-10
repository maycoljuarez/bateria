/* nombre: ejercicio_41
autor: maycol andres juarez
lugar : ITV
instrucciones: gasolinera la chelita
*/ 

#include<iostream>
using namespace std;


int main() {
	float cant;
	float disel;
	float regular;
	float super;
	int tipoc;
	cout << " bienvenido a la gasolinere la chelita" << endl;
	cout << " escribe el tipo de combustible a solicitar 1- gasolina regular  2- gasolina super 3- disel" << endl;
	cin >> tipoc;
	regular = 32.85;
	super = 33.48;
	disel = 28.45;
	if ((tipoc==1)) {
		cout << "Usted ha elegido la gasolina regular por favor ingrese la cantidad (litros)" << endl;
		cin >> cant;
		cout << " El precio total a pagar por " << cant << "L de gasolina regular es de " << regular*cant << "$" << endl;
	}
	if ((tipoc==2)) {
		cout << "Usted ha elegido la gasolina super por favor ingrese la cantidad (litros)" << endl;
		cin >> cant;
		cout << " El precio total a pagar por " << cant << "L de gasolina super es de " << super*cant << "$" << endl;
	}
	if ((tipoc==3)) {
		cout << "Usted ha elegido disel por favor ingrese la cantidad (litros)" << endl;
		cin >> cant;
		cout << " El precio total a pagar por " << cant << "L de disel es de " << disel*cant << "$" << endl;
	}
	return 0;
}

