/*
Un algoritmo que permita al usuario/a ingresar doce numeros enteros de a uno e indique como salida: la cantidad de numeros 
pares y la cantidad de numeros impares que fueron ingresados.
Por ejemplo:
Ingresar 12 numeros enteros:
1
-4
3
1
90
15
-7
8
14
10
11
23
La cantidad de numeros pares ingresados fue: 5
La cantidad de numeros impares ingresados fue: 7

En este ejercicio no puede usarse arrays, porque es para Algoritmos de primer año y a septiembre, todavia no los vieron. 
*/

#include <iostream>
using namespace std;

int main(){
	
	int numero=0, pares=0, impares=0;
	
	cout<<"Ingrese 12 numeros enteros: ";
	
	for(i=0, i<11, i++){
		cin>>numero;
		cin.ignore();
		
		
	}
	
	cout<<"La cantidad de numeros pares ingresados fue: "<<pares;	
	
	return 0;
}
