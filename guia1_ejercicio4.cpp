#include <iostream>
using namespace std;
int main(){
	
	/*
	4. Un algoritmo que calcule el �rea de un rect�ngulo. Para esto, deber� solicitar al
	usuario/a el o los datos necesarios del rect�ngulo y, por �ltimo, mostrar como
	salida su �rea.
	a) Definir las variables requeridas y el tipo de cada una de ellas (entero, real,
	car�cter, cadena, l�gico)
	b) Plantear el pseudoc�digo del algoritmo.
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
