/* nombre: ejercicio_23
autor: maycol andres juarez
lugar : ITV
instrucciones: el bar de doña chela
*/ 
#include<iostream>
using namespace std;


int main() {
	int bocadillojamon;
	int cerveza;
	float cuenta;
	string eleccion;
	int refresco;
	string respuesta;
	float totalbo;
	float totalcerv;
	float totalref;
	cout << "bienvenidos al bar la caverna de moe" << endl;
	cout << " le presentaremos nuestra carta" << endl;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << "________________________________________________________________" << endl;
	cout << "   bocadillo de jamon--------1,50$" << endl;
	cout << "   refresco------------------1,05$" << endl;
	cout << "   cerveza-------------------0,75$" << endl;
	cout << "________________________________________________________________" << endl;
	cout << " " << endl;
	cout << "porfavor elija que ordenara primero( bocadillo-B, refresco-f, cerveza-c)" << endl;
	cin >> eleccion;
	if ((eleccion=="b" || eleccion=="B")) {
		cout << " cantidad " << endl;
		cin >> bocadillojamon;
	}
	if ((eleccion=="f" || eleccion=="F")) {
		cout << " cantidad " << endl;
		cin >> refresco;
	}
	if ((eleccion=="c" || eleccion=="C")) {
		cout << " cantidad " << endl;
		cin >> cerveza;
	}
	cout << " ordenara algo mas ( y o n )?" << endl;
	cin >> respuesta;
	if ((respuesta=="y")) {
		cout << " " << endl;
		cout << "porfavor elija que ordenara segundo( bocadillo-B, refresco-f, cerveza-c)" << endl;
		cin >> eleccion;
		if ((eleccion=="b" || eleccion=="B")) {
			cout << " cantidad " << endl;
			cin >> bocadillojamon;
		}
		if ((eleccion=="f" || eleccion=="F")) {
			cout << " cantidad " << endl;
			cin >> refresco;
		}
		if ((eleccion=="c" || eleccion=="C")) {
			cout << " cantidad " << endl;
			cin >> cerveza;
		}
	}
	cout << " ordenara algo mas ( y o n )?" << endl;
	cin >> respuesta;
	if ((respuesta=="y")) {
		cout << " " << endl;
		cout << "porfavor elija que ordenara luego( bocadillo-B, refresco-f, cerveza-c" << endl;
		cin >> eleccion;
		if ((eleccion=="b" || eleccion=="B")) {
			cout << " cantidad " << endl;
			cin >> bocadillojamon;
		}
		if ((eleccion=="f" || eleccion=="F")) {
			cout << " cantidad " << endl;
			cin >> refresco;
		}
		if ((eleccion=="c" || eleccion=="C")) {
			cout << " cantidad " << endl;
			cin >> cerveza;
		}
	}
	totalbo = bocadillojamon*1.50;
	totalref = refresco*1.05;
	totalcerv = cerveza*0.75;
	cuenta = totalbo+totalref+totalcerv;
	cout << " la cuenta final por todo su pedido es de " << cuenta << "$" << endl;
	cout << " gracias por su preferencia" << endl;
	return 0;
}

