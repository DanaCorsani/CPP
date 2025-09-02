#include <iostream>
using namespace std;

int main(){
	
	/*
	6. Un algoritmo que calcule el área de un trapecio isósceles. Para esto, deberá solicitar al usuario/a el o los datos 
	necesarios del trapecio isósceles y, por último, mostrar como salida su área.
	a) Definir las variables requeridas y el tipo de cada una de ellas (entero, real, carácter, cadena, lógico)
	b) Plantear el pseudocódigo del algoritmo.
	*/
	
	cout<<"Esto es un trapecio isosceles:\n";
	cout<<"   _______  <==  Base mayor"<<endl;
	cout<<"  /       |\\"<<endl;
	cout<<" /        | \\  <== Altura (línea que atraviesa al triangulo isosceles)"<<endl;  //Lado oblicuo 
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
