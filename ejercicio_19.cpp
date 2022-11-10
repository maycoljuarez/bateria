/* nombre: ejercicio_19
autor: maycol andres juarez
lugar : ITV
instrucciones: notas estudiantes
*/ 
#include<iostream>
using namespace std;



int main() {
	int final[1000];
	int i;
	int j;
	string nombre[10000];
	int practica[10000];
	int problemas[1000];
	string resp;
	float suma[1000];
	int teorica[10000];
	i = 1;
	resp = "s";
	while (resp=="s") {
		cout << " ingrese el nombre del estudiante " << endl;
		cin >> nombre[i-1];
		cout << " ingrese la nota de la practica ( de 0 a 10 )" << endl;
		cin >> practica[i-1];
		cout << " iongrese la nota de los problemas( de 0 a 50) " << endl;
		cin >> problemas[i-1];
		cout << " ingrese la nota de la parte teorica( de 0 a 40)" << endl;
		cin >> teorica[i-1];
		suma[i-1] = practica[i-1]+problemas[i-1]+teorica[i-1];
		final[i-1] = suma[i-1]/10;
		i = i+1;
		cout << " ingresar otro alumno ? ( s o n )" << endl;
		cin >> resp;
	}
	j = 1;
	do {
		cout << " nota final de " << nombre[j-1] << " es igual a " << final[j-1] << endl;
		j = j+1;
	} while (j!=i);
	return 0;
}

