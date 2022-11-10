/* nombre: ejercicio_6
autor: maycol andres juarez
lugar : ITV
instrucciones:  porcentaje de hombres y de mujeres
*/ 
#include<iostream>
using namespace std;


int main() {
	int f;
	int m;
	int total;
	cout << "ingrese cantidad de estudiantes mujeres " << endl;
	cin >> f;
	cout << " ingrese cantidad de estudiantes hombres " << endl;
	cin >> m;
	total = f+m;
	cout << " el total de estudiantes mujeres es igual a " << (f*100)/total << " porciento" << endl;
	cout << " el total de estudiantes hombres es igual a " << (m*100)/total << " porciento" << endl;
	return 0;
}

