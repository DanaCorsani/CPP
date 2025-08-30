#include <iostream>
using namespace std;
int main(){
	
	/*
	4. Un algoritmo que calcule el área de un rectángulo. Para esto, deberá solicitar al
	usuario/a el o los datos necesarios del rectángulo y, por último, mostrar como
	salida su área.
	a) Definir las variables requeridas y el tipo de cada una de ellas (entero, real,
	carácter, cadena, lógico)
	b) Plantear el pseudocódigo del algoritmo.
	*/
	
	float base=0, altura=0, area=0;
	
	cout<<"Esto es un rectangulo: \n";
	cout<<" _____________\n";
	cout<<"|             |\n";
	cout<<"|             |\n";
	cout<<"|_____________|\n";
	
	cout<<"\nIngrese el valor de la base del rectangulo: ";
	cin>>base;
	cin.ignore();
	
	cout<<"Ingrese el valor de la altura del rectangulo: ";
	cin>>altura;
	cin.ignore();
	
	area=base*altura;
	
	cout<<"\nLos valores ingresados son: \n\nBase: "<<base<<"\nAltura: "<<altura<<"\n\nEl area del rectangulo es: "<<area;
	
	
	return 0;
}
