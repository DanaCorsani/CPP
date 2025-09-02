/*
Un algritmo que permita al usuario/a ingresar un numero entero e indique como salida: si es par o impar.
Por ejemplo: Ingresar un numero entero:
-3
El numero -3 es impar
*/
 
#include <iostream>
using namespace std;

int main(){
	
	int numero;
	
	cout<<"Ingrese un numero entero: ";
	cin>>numero;
	cin.ignore();
	if(numero>=0){
		cout<<"\nEl numero "<<numero<<" es par";
	}else{
		cout<<"\nEl numero "<<numero<<" es impar";
	}
	
	return 0;
}
