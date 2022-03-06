#include <iostream>
#include"biblioteca.hpp"

/* run this program using the console pauser or add your own 
getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
float a,b;
float resultado1;
float resultado2;
float resultado3;
float resultado4;

	cout<<"LOS VALORES INGRESADOS SE VAN A: SUMAR, RESTAR, MULTIPLICAR Y DIVIDIR:"<<endl;
	cout<<"Ingrese el primer valor: "; cin>>a;
	cout<<"Ingrese el segundo valor: "; cin>>b;
	resultado1=suma(a,b);
	resultado2=resta(a,b);
	resultado3=multiplicacion(a,b);
	cout<<"\nEl resultado de la suma es: "<<resultado1;
	cout<<"\nEl resultado de la resta es: "<<resultado2;
	cout<<"\nEl resultado de la multiplicacion es: "<<resultado3;
	cout<<"\nEl resultado de la division es: ";resultado4=division(a,b); cout<<resultado4<<endl;
	
	system("pause");
	return 0;
}

