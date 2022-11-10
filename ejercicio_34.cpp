/* nombre: ejercicio_34
autor: maycol andres juarez
lugar : ITV
instrucciones: inventario de almacen
*/ 
#include<iostream>
using namespace std;


int main() {
	int calid;
	float canti10;
	float canti20;
	float cantimax;
	int exist;
	float tipo1;
	float tipo2;
	float tipo3;
	cout << " programa de calculo de solicitud de articulos" << endl;

	cout << "por favo ingresar el tipo del articulo que desea solicictar( tipo 1-2-3)" << endl;
	cin >> calid;
	cout << " por favor ingrese la cantidad de articulos en existencias actualmente en el inventario" << endl;
	cin >> exist;
	tipo1 = 10;
	tipo2 = 15;
	tipo3 = 5;
	canti10 = 20;
	canti20 = 15;
	cantimax = 10;
	if ((calid==1)) {
		if ((exist<10)) {
			cout << " la cantidad total de producto a solicitar corresponde al " << tipo1+canti10 << "% de la cantidad actual" << endl;
		}
		if ((exist>=10 && exist<20)) {
			cout << " la cantidad total de producto a solicitar corresponde al " << tipo1+canti20 << "% de la cantidad actual" << endl;
		}
		if ((exist>=20)) {
			cout << " la cantidad total de producto a solicitar corresponde al " << tipo1+cantimax << "% de la cantidad actual" << endl;
		}
	}
	if ((calid==2)) {
		if ((exist<10)) {
			cout << " la cantidad total de producto a solicitar corresponde al " << tipo2+canti10 << "% de la cantidad actual" << endl;
		}
		if ((exist>=10 && exist<20)) {
			cout << " la cantidad total de producto a solicitar corresponde al " << tipo2+canti20 << "% de la cantidad actual" << endl;
		}
		if ((exist>=20)) {
			cout << " la cantidad total de producto a solicitar corresponde al " << tipo2+cantimax << "% de la cantidad actual" << endl;
		}
	}
	if ((calid==3)) {
		if ((exist<10)) {
			cout << " la cantidad total de producto a solicitar corresponde al " << tipo3+canti10 << "% de la cantidad actual" << endl;
		}
		if ((exist>=10 && exist<20)) {
			cout << " la cantidad total de producto a solicitar corresponde al " << tipo3+canti20 << "% de la cantidad actual" << endl;
		}
		if ((exist>=20)) {
			cout << " la cantidad total de producto a solicitar corresponde al " << tipo3+cantimax << "% de la cantidad actual" << endl;
		}
	}
	return 0;
}

