/* nombre: ejercicio_29
autor: maycol andres juarez
lugar : ITV
instrucciones: notas estudiantes
*/ 
#include<iostream>
using namespace std;



int main() {
	int sumat;
	int l;
	int number[3];
l=1;
	
do{
cout<<" ingrese el numero "<< endl;
	cin>>number[l];
	l=l+1;
} while ( l<=3);
	
	cout<<"numero 2 es igual a :"<< number[1]<< endl;
	
	cout<<"numero 2 es igual a :"<< number[2]<<endl;
	
	cout<<" numero 3 es igual a : "<< number[3]<< endl;
	
//	sumat = number[2] + number[1];

if ((number[1]+number[2]) == number[3]){
	cout<<" los numeros son iguales"<<endl;
	
} else {
	cout<<" los numeros  no son iguales"<<endl;
}
	
	
	return 0;
}

