/*
Guia 2 - Ejercicio 8
Un algoritmo que permita al usuario/a ingresar diez numeros enteros y muestre como aslida cual es el mayor de ellos
Programa en C++
*/

#include <iostream>
using namespace std;

int main(){
	
	int numero, contador=0, mayor;
	cout<<"Ingrese un numero entero: ";
	cin>>mayor;		//los datos se cargan temporalmente en un bufer de entrada
	cin.ignore();		//limpio el buffer de entrada. los enter. especialmente molesto en cadena de caracteres
	
	while (contador<9){		//va de 0 a 8.   mientras. se repite mientras lo que este entre parentesis se cumpla. hay una condicion. en este caso, mientras que el contador sea menos que nueve. esta variable contador siempre tiene que estar inicializada, porque si no, va a tener datos residuales.
		cout<<"Ingrese un numero entero: ";
		cin>>numero;
		cin.ignore();
				
			if(numero>mayor){
				mayor=numero;		//actualizamos la variable con el nuevo numero
			}
			contador=contador+1;
	}
	
	cout<<"El mayor numero ingresado fue: "<<mayor;
	
	return 0;
}

//el while se puede usar siempre que sea repetitivo, el for se puede ingresar siempre que se sepa el limite de veces a repetir.
