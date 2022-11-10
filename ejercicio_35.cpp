/* nombre: ejercicio_35
autor: maycol andres juarez
lugar : ITV
instrucciones: fprmula dada por el proesor
*/ 

#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float valor1;
	float valor2;
	float valor3;
	int x;
	cout << " por favor ingrese el valor a calcular por medio de la formula" << endl;
	cin >> x;
	cout << " X para positivo es igual a " << endl;
	valor1 = (pow((x-2),2))/2;
	valor2 = (pow((x-2),4))/4;
	valor3 = (pow((x-2),6))/6;
	cout << " F(x) = " << valor1+valor2+valor3 << endl;
	cout << " X para negativo es igual a " << endl;
	valor1 = (pow((x-2),2))/2;
	valor2 = (pow((x-2),4))/4;
	valor3 = (pow((x-2),6))/6;
	cout << " F(x) = " << valor1-valor2-valor3 << endl;
	return 0;
}

