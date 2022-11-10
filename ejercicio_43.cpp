/* nombre: ejercicio_43
autor: maycol andres juarez
lugar : ITV
instrucciones: no bro, si discriminas a las personas con sobre peso sos un weon, xd
*/ 

#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float altura[1000];
	int i;
	float ideal[1000];
	int j;
	int l;
	string nombre[1000];
	float peso[1000];
	string resp;
	float sumador;
	float telf[10000];
	i = 1;
	do {
		cout << " ingrese el nombre de el cliente numero :" << i << endl;
		cin >> nombre[i-1];
		cout << " ingrese la altura del cliente en mts: " << endl;
		cin >> altura[i-1];
		cout << " ingrese el peso de el cliente en kg: " << endl;
		cin >> peso[i-1];
		cout << "ingrese el numero del telefono del cliente: " << endl;
		cin >> telf[i-1];
		i = i+1;
		sumador = i;
		cout << " agregar otro cliete? (s o n) ";
		cin >> resp;
	} while (resp!="n");
	j = 1;
	cout << "_______________________________________________________________________________________________" << endl;
	cout << " NOMBRE            ALTURA             PESO        NUMERO            peso ideal" << endl;
	do {
		ideal[j-1] = peso[j-1]/pow(altura[j-1],2);
		cout << nombre[j-1] << "           " << altura[j-1] << " mts             " << peso[j-1] << "kg       " << telf[j-1] << "            " << ideal[j-1] << endl;
		cout << "-------------------------------------------------------------------------------------------------------------" << endl;
		j = j+1;
	} while (j!=sumador);
	cout << "-----------------------------------PERSONAS DELGADAS--------------------------" << endl;
	l = 1;
	do {
		if ((ideal[l-1]<20)) {
			cout << nombre[l-1] << " delgada, no llamar" << endl;
		}
		l = l+1;
	} while (l!=sumador);
	cout << " " << endl;
	cout << " -----------------------------------PERSONAS CON PESO NORMAL---------------------" << endl;
	l = 1;
	do {
		if ((ideal[l-1]>=20 && ideal[l-1]<23)) {
			cout << nombre[l-1] << " Normal, no llamar" << endl;
		}
		l = l+1;
	} while (l!=sumador);
	cout << " " << endl;
	cout << " --------------------------------------PERSONA CON SOBREPESO--------------------" << endl;
	l = 1;
	do {
		if ((ideal[l-1]>=23 && ideal[l-1]<26)) {
			cout << nombre[l-1] << " sobrepeso, numero de telefono:   " << telf[l-1] << endl;
			cout << " " << endl;
		}
		l = l+1;
	} while (l!=sumador);
	cout << " --------------------------------------PERSONA CON OBESIDAD--------------------" << endl;
	l = 1;
	do {
		if ((ideal[l-1]>=26)) {
			cout << nombre[l-1] << " OBESA, numero de telefono:     " << telf[l-1] << endl;
		}
		l = l+1;
	} while (l!=sumador);
	cout << " " << endl;
	cout << "_______________________________________________________________________________________________________________" << endl;
	return 0;
}

