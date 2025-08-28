/*
Guía de Ejercicios 1:
Dados los siguientes enunciados:
2. Un algoritmo que calcule el área de un cuadrado. Para esto, deberá solicitar al
usuario/a el o los datos necesarios del cuadrado y, por último, mostrar como salida
su área.
a) Definir las variables requeridas y el tipo de cada una de ellas (entero, real,
carácter, cadena, lógico)
b) Plantear el pseudocódigo del algoritmo.
*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int lado=0, resultado=0;
	cout<<"Ingrese el valor de uno de los lados del cuadrado: ";
	cin>>lado;
	cin.ignore();
	resultado= pow(lado,2);
	cout<<"El valor ingresado es: "<<lado<<"\nEl area del cuadrado es: "<<resultado;
	
	return 0;
}
