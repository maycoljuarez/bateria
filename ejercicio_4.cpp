/* nombre: ejercicio_4
autor: maycol andres juarez
lugar : ITV
instrucciones: suma o producto 
*/ 
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	int a, b, c;
	cout << " ingrese el primer valor " << endl;
	cin>> a;
	
	cout<< " ingrese el segundo  valor : "<< endl;
	cin>> b;
	
	cout << " ingrese el tercer valor : "<< endl;
	cin>> c;
	
	if (a<0){
		cout<<" la multiplicacion de los numero es igual a "<< a*b*c << endl;
	}
	if (a>0){
		cout<< " la suma de los numeros es igual a ; "<< a+b+c << endl;
	}
	
	return 0;
}

