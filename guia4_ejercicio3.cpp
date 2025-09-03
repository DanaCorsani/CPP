/*
Un algoritmo que permita al usuario/a ingresar doce numeros enteros positivos (de a uno). Luego de cada ingreso debera validarse que el numero cargado si o si sea positivo - y si no es asi, debera solicitarse su reingreso hasta ser correcto. En base a todos los numeros positivos ingresados, debera mostrar como salida: la cantidad de numeros pares y la cantidad de numeros impares.
Por ejemplo: 
Ingresar 12 numeros enteros positivos:
-1
El numero ingresado no es positivo. Reingresar:
1
4
3
1
90
15
7
8
14
10
11
23
La cantidad de numeros pares ingresados fue: 5
La cantidad de numeros impares ingresados fue: 7
*/

#include <iostream>
using namespace std;

int main(){
	
	float numero=0;
	int i=0, pares=0, impares=0;
	
	for(i=0; i<=11; i++){
		cout<<"Ingrese un numero entero: ";
		cin>>numero;
		cin.ignore();
		while(numero/1!=0){
			cout<<"\nEl numero ingresado debe ser entero. Reingrese un numero entero: ";
			cin>>numero;
			cin.ignore();
		}
		
	}
	
	cout<<"\n\nLa cantidad de numeros pares ingresados fue: "<<pares<<"La cantidad de numeros impares ingresados fue: "<<impares;
	
	return 0;
}
