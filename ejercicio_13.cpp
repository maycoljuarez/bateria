
/* nombre: ejercicio_13
autor: maycol andres juarez
lugar : ITV
instrucciones:  sumador de numeros
*/ 
#include<iostream>
using namespace std;


int main() {
	int n;
	cout<< " ingrese la cantidad de numeros pares a sumar "<< endl;
	cin>> n;
	
	int cont=0;
	int i=2;
	int sum = 0;
	do {
		sum = sum + i;
		i=i + 2;
		cont= cont +1;
	}while (cont<=n);
	
	cout<<" la suma de primeros numeros pares es igual " << sum << endl;
	
	return 0;
}

