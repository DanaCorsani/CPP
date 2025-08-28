/*
2. Un algoritmo que calcule el área de un cuadrado. Para esto, deberá solicitar al
usuario/a el o los datos necesarios del cuadrado y, por último, mostrar como salida
su área.
a) Definir las variables requeridas y el tipo de cada una de ellas (entero, real,
carácter, cadena, lógico)
b) Plantear el pseudocódigo del algoritmo.
*/
#include <iostream>
using namespace std;

int main(){
	int lado=0, resultado=0;
	cout<<"Indique el valor de un lado del cuadrado y se le dara el area de este\n";
	cin>>lado;
	cin.ignore();
	resultado=lado*lado;
	cout<<"El valor del lado ingresado es: "<<lado<<"\nEl area del cuadrado es: "<<resultado;
	
	return 0;
}
