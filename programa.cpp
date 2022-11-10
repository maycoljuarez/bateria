



#include<math.h>
#include<iostream>
using namespace std;

int main() {
	float al;
	float c;
	float cont;
	int eleccion;
	float l;
	float m;
	string nombre;
	float oro;
	float plat;
	float resist;
	string resp;
	float trans;
	cout << "___________________________________bienvenido--__________________________________" << endl;
	cout << " ingrese su nombre" << endl;
	cin >> nombre;
	cout << "bienvenido " << nombre << ", al programa para saber la resisitencia de tu cable conductor y saber cual necesitas" << endl;
	cout << "sabe el nombre de el material a usar?( si o no)" << endl;
	cin >> resp;
	if ((resp=="si")) {
		cout << " por favor ingrese el material del cable que desea"<< endl;
		do {
			cout << "1-cobre" << endl;
			cout << "2-plata" << endl;
			cout << "3-oro" << endl;
			cout << "4- aluminio" << endl;
			cout << "5- bronce" << endl;
			cout << "6- acero" << endl;
			cout << "7- salir" << endl;
			cin >> eleccion;
			switch (eleccion) {
			case 1:
				c = 0.0179;
				cout << " la resisitividad de el cobre por defecto es de : "<<c<<"ohm"<< endl;
				cout << " ingrese la longitud del cable conductor que usara: " << endl;
				cin >> l;
				cout << " escribe el valor de la transversal del cable" << endl;
				cin >> trans;
				resist = c*(l/trans);
				cout << "el valor de la resisitividad total es de " << resist << " ohms" << endl;
				break;
			case 2:
				plat = 0.0159;
				cout << " la resisitividad de el plata por defecto es de : "<<plat<<"ohm"<< endl;
				cout << " ingrese la longitud del cable conductor que usara: " << endl;
				cin >> l;
				cout << " escribe el valor de la transversal del cable" << endl;
				cin >> trans;
				resist = plat*(l/trans);
				cout << "el valor de la resisitividad total es de " << resist << " ohms" << endl;
				break;
			case 3:
				oro = 0.0244;
				cout << " la resisitividad de el oro por defecto es de : " <<oro<<"ohm"<< endl;
				cout << " ingrese la longitud del cable conductor que usara: " << endl;
				cin >> l;
				cout << " escribe el valor de la transversal del cable" << endl;
				cin >> trans;
				resist = oro*(l/trans);
				cout << "el valor de la resisitividad total es de " << resist << " ohms" << endl;
				break;
			case 4:
				al = 0.275;
				cout << " la resisitividad de el aluminio por defecto es de : " << endl;
				cout << " ingrese la longitud en  del cable conductor que usara:" << endl;
				cin >> l;
				cout << " escribe el valor de la transversal  del cable " << endl;
				cin >> trans;
				resist = al*(l/trans);
				cout << "el valor de la resisitividad total es de " << resist << " ohms" << endl;
				break;
			case 5:
				cont = 0.017;
				cout << " la resisitividad de el bronce por defecto es de : " <<cont<<"ohm"<< endl;
				cout << " ingrese la longitud del cable conductor que usara: " << endl;
				cin >> l;
				cout << " escribe el valor de la transversal del cable" << endl;
				cin >> trans;
				resist = cont*(l/trans);
				cout << "el valor de la resisitividad total es de " << resist << " ohms" << endl;
				break;
			case 6:
				m = 0.30;
				cout << " la resisitividad de el acero por defecto es de : " <<m<<"ohm"<< endl;
				cout << " ingrese la longitud del cable conductor que usara: " << endl;
				cin >> l;
				cout << " escribe el valor de la transversal del cable" << endl;
				cin >> trans;
				resist = m*(l/trans);
				cout << "el valor de la resisitividad total es de " << resist << " ohms" << endl;
				break;
			}
			cout << " " << endl;
		} while (eleccion!=7);
	}
	if ((resp=="no")) {
		cout << "ok " << nombre << ", le proporcionare una lista de los materiales con los que contamos y una breve descripcion" << endl;
		cout << "1-cobre" << endl;
		cout << "2-plata" << endl;
		cout << "3-oro" << endl;
		cout << "4- aluminio" << endl;
		cout << "5- bronce" << endl;
		cout << "6- acero" << endl;
		cout << "7- salir" << endl;
		cin >> eleccion;
		switch (eleccion) {
		case 1:
			cout << " el COBRE, es uno de los mejores conductores termicos y electricos , con una eficacia del 100%" << endl;
			cout << " por lo cual este tiene una baja resisitividad a la corriente por lo que es fiable para el uso estandar, aparte de ser mas barato que su vecina la plata, con un precio de 118 usd$ por kilo" << endl;
			break;
		case 2:
			cout << "la PLATA, es el rey de los conductores, actualmente es el mejor por su maleabilidad, conduccion superior al cobre en un 10%, y su facilidad de soldar" << endl;
			cout << "pero... su elevado precio lo vuelve muy poco utilizado, su precio actual es de 681usd$ por kilo" << endl;
			break;
		case 3:
			cout << " el ORO, es uno de los mejores por su alta resistencia para la corrosion y conductividad, pero... su alto costo lo lmita mucho en su uso, siendo mayormente implemantado en maquinaria medica principalmente" << endl;
			cout << "su precio por kilo actual es de 53,975usd$" << endl;
			break;
		case 4:
			cout << " el ALUMINIO, es menos ductil que los anteriores, por lo que se necesita un mayor diametro para que sea eficaz" << endl;
			cout << " su precio actual por kilo es de 0.60 usd$ " << endl;
			break;
		case 5:
			cout << " el bronce, contiene caracteristicas similares a las de la plata pero este no es tan usado por su alto costo de igual manera" << endl;
			cout << "su costo por kilo es de 8usd$ " << endl;
			break;
		case 6:
			cout << " el ACERO, este no es un conductor por excelencia pero si sabe defenderse, aun asi mayormente no es rentable usarlo como total conductor, se usa mas como aleaciones resistivas" << endl;
			cout << " el precio de este por kilo es de 5usd$" << endl;
			break;
		}
	}
	return 0;
}

