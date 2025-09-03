/*
Un algoritmo que permita al usuario/a ingresar un numero entero e indique como salida: si es par o impar.
Por ejemplo: Ingresar un numero entero:
-3
El numero -3 es impar
*/
 
#include <iostream>
using namespace std;

int main(){
		
			int numero=0, pares=0, impares=0;
				
			cout<<"Ingrese un numero entero: ";
			cin>>numero;
			cin.ignore();
			
			if(numero%2==0){
			cout<<"\nEl numero "<<numero<<" es par\n\n";
			pares++;
			}else{
			cout<<"\nEl numero "<<numero<<" es impar\n\n";
			impares++;
			}

	return 0;
}
