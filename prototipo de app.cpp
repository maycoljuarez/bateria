/*nombre:
autor :
lugar:
instrucciones:
*/

//idea basica de las principales ecuaciones utilizadas durante lo que va en la carrera

#include<math.h>
#include<iostream>

using namespace std;

int main(){
	
	
	
	double inter, Dvolt, volt, Dcorrient,resistT[2], resist;
	int ecu, corrient[3], tipo;
 string nombre;
string resp;	
	int i;	
	
	cout<<" ___________________________PRINCIPALES ECUACIONES DE ELECTRONICA_________________________________"<<endl;
	cout<<"escriba su nombre por favor"<<endl;
	cin>>nombre;
	
	cout<<"hola "<<nombre<<" me presento, mi nombre es maju, asisitente virtual, yo te ayudare a encontrar la ecuacion que necesitas"<<endl;

	
		i=1;
		do {
			cout<<"excelente, "<<nombre<<" las ecuaciones que le ofrrecemos son las siguientes: "<<endl;
			cout<<"1- ley de ohm\n2- ley de kirchoft\n3- divisor de voltaje\n4- divisor de corriente"<<endl;
			cin>>ecu;
					
					switch(ecu){
					
						case 1:
							cout<<" usted a elegido la ley de ohm,por favor indique que elemento de la ley de ohm desea:"<<endl;
							cout<<"1-intensidad\n2-voltaje\n3-resisitencia\n4-descripcion de la ley"<<endl;
								cin>>tipo;
									switch(tipo){
									
									case 1:
										cout<<"ha elejido intensidad, para este valor se necesita su voltaje y la resistencia"<<endl;
										cout<<" ingrese la resistencia: "<<endl;
											cin>>resist;
										cout<<"ingrese el voltaje: "<<endl;
											cin>>volt;
											corrient[1]= volt/resist;
														cout<<"la corriente o la intensidad es igual a: "<<corrient[1]<<"amps"<<endl;
									break;
									case 2:
										cout<<"usted elijio voltaje, para este valor se necesitan la resistencia y la intensidad"<<endl;
											cout<<" ingrese la resistencia: "<<endl;
											cin>>resist;
										cout<<"ingrese la intensidad: "<<endl;
											cin>>corrient[1];
												volt= resist * corrient[1];
													cout<<"el voltaje total es de :"<<volt<<"volts"<<endl;
													break;
									break;
									case 3:
										cout<<"usted elijio resistencia, para este valor se necesitan el voltaje y la intensidad"<<endl;
											cout<<" ingrese el voltaje: "<<endl;
											cin>>volt;
										cout<<"ingrese la intensidad: "<<endl;
											cin>>corrient[1];
												resist= volt / corrient[1];
													cout<<"la resistencia  total es de :"<<resist<<"ohm"<<endl;
									break;	
									case 4:
										cout<<"la ley de ohm; esta ley dicta que la intencidad es directamente proporcional a el voltaje"<<endl;
										cout<<"e indirectamente proporcional a la resistencia"<<endl;		
			
											}
						//reparar!!!!!!!!!!!!!!!!!!!!!!!!!!!!									
						break;
						case 2:
							cout<<" usted a elegido la ley de kirchoff,por favor indique:"<<endl;
							cout<<"1- ingresar intensidades de entrada\n2- descripcion de la ley"<<endl;
								cin>>tipo;
									switch(tipo){
										case 1: 
										cout<<"por favor indique las intencidades de entrada"<<endl;
										cout<<" ingrese la intensidad uno"<<endl;
											cin>>corrient[1];
										cout<<" ingrese la intensidad dos"<<endl;
											cin>>corrient[2];
												corrient[3]=corrient[1]+corrient[2];
														cout<<" la corriente de salida es igual a "<<corrient[3]<<"amp"<<endl;
										break;
										case 2:
											cout<<"la ley de kirchoff; esta propone que la intensidad salinte de un nodo es igual a las intencidades entrantes a este"<<endl;
										break;
									}
							break;
						
						
						
						case 4:
							 	cout<<" usted a elegido divisor de corriente, por favor indique:"<<endl;
							cout<<"1- intencidad en reisitencia\n2- descripcion de la ley"<<endl;
								cin>>tipo;
									switch(tipo){
										case 1:
											cout<<"para saber la intencidad en la reisitencia se necesita la corriente total, resisitencia total y resisitencia especifica"<<endl;
											cout<<" ingrese la intensidad total"<<endl;
											cin>>corrient[1];
											
											cout<<"ingrese la resistencia total:"<<endl;
											cin>>resistT[1];
											
											cout<<"ingrese la resisitencia especifica :"<<endl;
											cin>>resist;
											
											Dcorrient = corrient[1] * (resist / resistT[1]);
												cout<<"la corriente en la resisitencia especifica es igual a :"<<Dcorrient<<" amps"<<endl;
										break;
										case 2:
											cout<<"DIVISOR DE CORRIENTE; es una ecuacion utilizada para saber la corriente que pasa en una resisitencia en un circuito paralelo"<<endl;
										break;
									}
									
							
						case 3:
								cout<<" usted ha elegido divisor de voltaje, por favor indique:"<<endl;
							cout<<"1-voltaje en la resisitencia\n2- descripcion de la ley"<<endl;
							cin>>tipo;
								switch(tipo){
									case 1: 
									cout<< "para calcular se necesitan el voltaje total, la resisitencia total y la resisitencia especifica"<<endl;
									cout<<" ingrese el voltaje total"<<endl;
									cin>>volt;
									
									cout<<" ingrese la resisitencia total"<<endl;
									cin>>resistT[1];
									
									cout<<" ingrese la resisitencia especifica"<<endl;
									cin>>resist;
									
										Dvolt= volt*(resist/resistT[1]);
										
										cout<<"el voltaje en la resisitencia es de "<<Dvolt<<"volts"<<endl;
									
								}			
				
	}
		
			i=i+1;
			
		}while (i<2);
		
	

	
	
	return 0;
	
}



