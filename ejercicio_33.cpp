/* nombre: ejercicio_33
autor: maycol andres juarez
lugar : ITV
instrucciones: pago estudios
*/ 
#include<iostream>
using namespace std;


int main() {
	float asoci;
	int cant;
	float costm;
	float costmen;
	float costt;
	float total;
	cout << "bienvenido al programa institucional de pagos de el colegio" << endl;
	cout << " _____________- LA CASITA-____________________________" << endl;
	cout << endl;
	cout << " por favor ingrese la cantidad de estudiantes que usted tiene actualmente en la institucion" << endl;
	cin >> cant;
	// costo de matricula  100$
	// costo de mensualidad de septiembre 30$
	// asociacion de padres 20$*
	costm = 100;
	costmen = 30;
	asoci = 20;
	costt = costm+costmen+asoci;
	total = costt*cant;
	cout << " _______________________________________________________________" << endl;
	cout << " costo por matricula por estudiante ---------100$" << endl;
	cout << " costo de mensualidad de septiembre----------30$" << endl;
	cout << " asociacion de padres (anual) ---------------20$" << endl;
	cout << "________________________________________________________________" << endl;
	if ((cant==2)) {
		cout << " La cantidad a pagar sera de un total de " << endl;
		cout << total << "$ " << " menos con el descuento de estudiantes sera un total de " << total-(total*0.10) << endl;
	}
	if ((cant==3)) {
		cout << " La cantidad a pagar sera de un total de " << endl;
		cout << total << "$ " << " menos con el descuento de estudiantes sera un total de " << total-(total*0.15) << endl;
	}
	if ((cant>3)) {
		cout << " La cantidad a pagar sera de un total de " << endl;
		cout << total << "$ " << " menos con el descuento de estudiantes sera un total de " << total-(total*0.20) << endl;
	}
	if ((cant==1)) {
		cout << " el coste total a pagar seria un total de " << total << "$." << endl;
	}
	return 0;
}

