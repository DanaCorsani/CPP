/*
Gu�a de Ejercicios 1:
Dados los siguientes enunciados:
2. Un algoritmo que calcule el �rea de un cuadrado. Para esto, deber� solicitar al
usuario/a el o los datos necesarios del cuadrado y, por �ltimo, mostrar como salida
su �rea.
a) Definir las variables requeridas y el tipo de cada una de ellas (entero, real,
car�cter, cadena, l�gico)
b) Plantear el pseudoc�digo del algoritmo.
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
