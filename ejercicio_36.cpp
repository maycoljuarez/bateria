/* nombre: ejercicio_36
autor: maycol andres juarez
lugar : ITV
instrucciones: pobre asalariado ;[
*/ 
#include<iostream>
using namespace std;


int main() {
	float benef;
	float horas;
	float horascomun;
	float horasext;
	string nombre;
	float salhora;
	cout << " bienvenido por favor registre su nombre" << endl;
	cin >> nombre;
	
	salhora = 11;
	cout << " el salario hora de pago es de 11 dolares" << endl;
	cout << " por favor ingrese la cantidad de horas trabajadas esta semana " << endl;
	cin >> horas;
	if ((horas>48)) {
		horasext = horas-48;
		benef = horasext*(salhora+(salhora*0.35));
		horascomun = 48*salhora;
		cout << "------------------------------------------------------------------------------------------------------------" << endl;
		cout << "colaborador : " << nombre << endl;
		cout << " salario hora igual a: " << salhora << "$" << endl;
		cout << " total de horas trabajadas esta semana " << horas << "h, de estas " << horasext << " son horas extras" << endl;
		cout << " salario base por horas -----------------------------------------------------------" << horascomun << "$" << endl;
		cout << " con un total de " << horasext << "con un incentido del 35%, correspomdiente a -------------" << benef << "$" << endl;
		cout << " salario neto igual a -------------------------------------------------------------" << horascomun+benef << "$" << endl;
		cout << "_____________________________________________________________________________________________________________" << endl;
	} else {
		cout << "------------------------------------------------------------------------------------------------------------" << endl;
		cout << "colaborador : " << nombre << endl;
		cout << " salario hora igual a: " << salhora << "$" << endl;
		cout << " con un total de horas trabajadas de " << horas << endl;
		cout << " salario neto igual a -------------------------------------------------------------" << horas*salhora << "$" << endl;
		cout << "_____________________________________________________________________________________________________________" << endl;
	}
	return 0;
}

