/* nombre: ejercicio_28
autor: maycol andres juarez
lugar : ITV
instrucciones: media aritmerica

*/ 
#include<iostream>
using namespace std;



int main() {
	float acum;
	int i;
	int j;
	float media;
	int num[10];
	i = 1;
	do {
		cout << " escribe el numero numero " << i << endl;
		cin >> num[i-1];
		i = i+1;
	} while ((i<=10));
	cout << " los numeros pares son " << endl;
	j = 1;
	do {
		if ((num[j-1]%2==0)) {
			cout << num[j-1] << " " << endl;
		}
		j = j+1;
	} while (j<=10);
	j = 1;
	acum = 0;
	do {
		if ((num[j-1]%2>0)) {
			acum = acum+num[j-1];
		}
		j = j+1;
	} while (j<=10);
	media = acum/10;
	cout << " la media aritmetica de los numeros impares es igual a " << media << endl;
	return 0;
}

