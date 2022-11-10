/* nombre: ejercicio_37
autor: maycol andres juarez
lugar : ITV
instrucciones: prefuntas sobre el algoritmo
*/ 

#include<iostream>
using namespace std;



int main() {
	int i;
	int n;
	cout << " ingrese un numero " << endl;
	cin >> n;
	i = 0;
	while ((n>1)) {
		if (((n%2)==0)) {
			n = n/2;
		} else {
			n = n*3+1;
		}
		i = i+1;
	}
	cout << i << endl;
	return 0;
}

// cuando se detiene el algoritmo?
// se detiene cuando llega la division de n es iguual a 0
// para que sirve la variable i?
// la variable i, sirve solo como un contador.
// se debe recibir alguna entrada por parte del usuario?
// si, para ingresar n , la cual se somete a las estructuras logicas
// que resultado entrega el algoritmo ? 
// entrega un numero entero dependiente de la estructura si y sino
// suponga que el usuario ingresa el numero 3, que resultado obtendria ?
// obtendria un 7, como respuesta de las vueltas dadas en el sisitema de estructura
