/*
Guía de Ejercicios 1:
Dados los siguientes enunciados:
1. Un algoritmo que calcule el perímetro de un cuadrado. Para esto, deberá solicitar al
usuario/a el o los datos necesarios del cuadrado y, por último, mostrar como salida
su perímetro.
a) Definir las variables requeridas y el tipo de cada una de ellas (entero, real,
carácter, cadena, lógico)
b) Plantear el pseudocódigo del algoritmo.
*/
#include <iostream>
using namespace std;

int main(){
	
	int lado=0, resultado=0;
	cout<<"Ingrese el valor de uno de los lados: ";
	cin>>lado;
	cin.ignore();
	resultado=lado*4; // o resultado=lado+lado+lado+lado+lado
	cout<<"El valor del lado ingresado es: "<<lado<<"\nEl perimetro del cuadrado es: "<<resultado;
	
	
	return 0;
}
