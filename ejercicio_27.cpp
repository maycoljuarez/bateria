/* nombre: ejercicio_27
autor: maycol andres juarez
lugar : ITV
instrucciones: aereolineaaaaaaa
*/ 
#include<iostream>
using namespace std;



int main() {
	float dias;
	float distancia;
	const float preciokm = 8.50;
	float preciot;
	
	cout << " bienvenido a aereolinea la linda vista" << endl;
	cout << " por favor escriba la cantidad de km que viajara con nosotros ( distancia minima 200km) " << endl;
	cin >> distancia;
	cout << " excelente, ahora introduzca la cantidad de dias de estancia" << endl;
	cin >> dias;
	cout << "____________YA PROCESAMOS SU SOLICITUD__________" << endl;
	preciot = (distancia*preciokm);
	if ((distancia>=1000 && dias>=7)) {
		cout << " buenas noticias, por su tiempo de estadia y distancia, le hemos dado un descuento de 30% " << endl;
		cout << "seria un total de " << preciot-(preciot*0.30) << "$ como total a pagar" << endl;
	} else {
		cout << " el precio total a pagar por " << distancia << "km y " << dias << " dias seran un total de " << preciot << "$. gracias por preferirinos" << endl;
	}
	return 0;
}

