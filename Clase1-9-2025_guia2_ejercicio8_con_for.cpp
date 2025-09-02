/*
Guia 2 - Ejercicio 8
Un algoritmo que permita al usuario/a ingresar diez numeros enteros y muestre como aslida cual es el mayor de ellos
Programa en C++
*/

#include <iostream>
using namespace std;

int main(){
	
	int numero, mayor;		//saco la variable   contador=0,
	cout<<"Ingrese un numero entero: ";
	cin>>mayor;		//los datos se cargan temporalmente en un bufer de entrada
	cin.ignore();		//limpio el buffer de entrada. los enter. especialmente molesto en cadena de caracteres
	
	for (contador=0, contador<9, contador++){		//va de 0 a 8.   para. se repite 9 veces, desde 0 a 8.
		cout<<"Ingrese un numero entero: ";
		cin>>numero;
		cin.ignore();
				
			if(numero>mayor){
				mayor=numero;		//actualizamos la variable con el nuevo numero
			}
			//contador=contador+1;		al usar un for, ya no necesito esto.
	}
	
	cout<<"El mayor numero ingresado fue: "<<mayor;
	
	return 0;
}

//el while se puede usar siempre que sea repetitivo, el for se puede ingresar siempre que se sepa el limite de veces a repetir.
// el while
