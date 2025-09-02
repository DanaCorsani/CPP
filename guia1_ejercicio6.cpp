#include <iostream>
using namespace std;

int main(){
	
	/*
	6. Un algoritmo que calcule el �rea de un trapecio is�sceles. Para esto, deber� solicitar al usuario/a el o los datos 
	necesarios del trapecio is�sceles y, por �ltimo, mostrar como salida su �rea.
	a) Definir las variables requeridas y el tipo de cada una de ellas (entero, real, car�cter, cadena, l�gico)
	b) Plantear el pseudoc�digo del algoritmo.
	*/
	
	cout<<"Esto es un trapecio isosceles:\n";
	cout<<"   _______  <==  Base mayor"<<endl;
	cout<<"  /       |\\"<<endl;
	cout<<" /        | \\  <== Altura (l�nea que atraviesa al triangulo isosceles)"<<endl;  //Lado oblicuo 
	cout<<"/_________|__\\  <== Base menor"<<endl;
	
	float base_menor, base_mayor, altura, resultado;
	
	cout<<"\nIngrese el valor de la base menor: ";
	cin>>base_menor;
	cin.ignore();
	
	cout<<"Ingrese el valor de la base mayor: ";
	cin>>base_mayor;
	cin.ignore();
	
	cout<<"Ingrese el valor de la altura";
	cin>>altura;
	cin.ignore();
	
	resultado=((base_menor*base_mayor)*altura)/2;
	
	cout<<"\n\nLos valores ingresador fueron:\nBase menor: "<<base_menor<<"\nBase mayor: "<<base_mayor<<"\nAltura: "<<altura<<"\n\nEl area del trapecio isosceles es: "<<resultado;
		
	return 0;
}
