#include <iostream>
using namespace std;

int main(){
	
	/*
	5. Un algoritmo que calcule el per�metro de un trapecio is�sceles. Para esto, deber� solicitar al usuario/a el o los datos 
	necesarios del trapecio is�sceles y, por �ltimo, mostrar como salida su per�metro.
		a) Definir las variables requeridas y el tipo de cada una de ellas (entero, real, car�cter, cadena, l�gico)
		b) Plantear el pseudoc�digo del algoritmo.
	*/
	
	cout<<"Esto es un trapecio isosceles:\n";
	cout<<"   _______"<<endl;
	cout<<"  /       \\"<<endl;
	cout<<" /         \\"<<endl;
	cout<<"/___________\\"<<endl;
	
	float base_mayor=0, base_menor=0, lado_oblicuo=0, perimetro=0;
	
	cout<<"\nIngrese el valor de la base mayor del trapecio isosceles: ";
	cin>>base_mayor;
	cin.ignore();
	
	cout<<"Ingrese el valor de la base menor del trapecio isosceles: ";
	cin>>base_menor;
	cin.ignore();
	
	cout<<"Ingrese el valor del lado oblicuo del trapecio isosceles: ";
	cin>>lado_oblicuo;
	cin.ignore();
	
	perimetro=base_mayor+base_menor+(2*lado_oblicuo);
	
	cout<<"\nLos valores ingresados son: \n\nBase mayor: "<<base_mayor<<"\nBase menor: "<<base_menor<<"\nlado oblicuo: "<<lado_oblicuo<<"\n\nEl perimetro del trapecio isosceles es: "<<perimetro;
		
	return 0;
}
