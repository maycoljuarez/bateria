/* nombre: ejercicio_39
autor: maycol andres juarez
lugar : ITV
instrucciones: bacno mamalon
*/ 

#include<iostream>
using namespace std;



int main() {
	string nombre;
	float salario;
	cout << "__________________________________________________________________________" << endl;
	cout << "       BIENVENIDO AL BANCO MAJU" << endl;
	cout << " INGRESE SU NOMBRE :";
	cin >> nombre;

	cout << "BIENVENIDO " << nombre << ", somos una banca de credito que ofrece credito a asalariados de distintos lugares" << endl;
	cout << " para saber a cuanto credito puede usted optar necesitamos que ingrese su salario mensual" << endl;
	cin >> salario;

	if ((salario<=200000)) {
		cout << " señor(a) " << nombre << ", su salario actual no cumple con los requisitos minimos para optar por un credito en este banco " << endl;
	}
	if ((salario>200000 && salario<500000)) {
		cout << " señor(a) " << nombre << ",le tenemos buenas noticias, usted puede optar por un credito de 5000,000$ en nuestro banco" << endl;
	}
	if ((salario>500000 && salario<1000000)) {
		cout << " señor(a) " << nombre << ",le tenemos buenas noticias, usted puede optar por un credito de 2,000,000$ en nuestro banco" << endl;
	}
	return 0;
}

