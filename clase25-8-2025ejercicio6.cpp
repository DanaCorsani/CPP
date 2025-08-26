#include <iostream>
using namespace std;
int main(){
	//Ejercicio 6
	//declarar variables
	int numero1, numero2, numero3;
	
	//sentencias
	cout<<"Ingrese el primer numero: ";
	cin>>numero1;
	cin.ignore();
	
	cout<<"Ingrese el segundo numero: ";
	cin>>numero2;
	cin.ignore();
	
	cout<<"Ingrese el tercer numero: ";
	cin>>numero3;
	cin.ignore();
	
	if (numero1>=numero2 && numero1>=numero3){ // if (numero1>numero2 y numero1>numero3){   empieza en español 		&&=and depende del editor de codigo, va a leer and o &&, o las dos
		cout<<"El numero mayor es: "<<numero1;
	}else if (numero2>=numero3){		//sino
										//	si (numero2>=numero3){
		cout<<"El numeor mayor es: "<<numero2;
	}else{								//sino
		cout<<"El numero mayor es: "<<numero3;
	}
	
	return 0;
}
