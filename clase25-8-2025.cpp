#include <iostream>
using namespace std;

int main(){
	//declarar variables
	float numero1, numero2;		//diminutivo de flotante. 12.5 la coma esta flotando en el medio del numero.  un entero, 12. por ejemplo, no esta flotando la coma. está al final.
	//sentencias
	cout<<"Ingrese el primer numero: ";
	cin>>numero1;
	cin.ignore(); //Siempre que cargue una variable numerica o caracter, o lo que sea, todo lo que yo typeo es un caracter de entrada. por ejemplo, si ingreso el 12.5, en realidad ingresé 12.5 enter. me queda el enter como dato de entrada molestando pero no me sirve. es particularmente molesto en valores numericos.
	
	cout<<"\nIngrese el segundo numero: ";
	cin>>numero2;
	cin.ignore();		//limpia el buffer de entrada. numero es una variable de tipo entero, lo guarda en la variable, el enter no es un entero, por lo tanto no lo va a poder guardar
	/*
	en español:
	si(numero1>numero2){
	
	cout<<"El numero mayor es: "<<numero1;
	}sino{
		cout<<"El numero mayor es: "<<numero2;
	}
	*/
	if(numero1>numero2){
		cout<<"El numero mayor es: "<<numero1;
	}else{
		cout<<"El numero mayor es: "<<numero2;
	}
	
	return 0; //al ejecutar el codigo, debo verificar que return value 0    esto me indica que todo salió bien, y si no, va a devolver otro numero. eso seria el numero de error
}
//Cual es la diferencia entre error and warning? 	compila igual pero puede llegar a fallar bajo ciertas condiciones, el error es de sintaxis y no lo va a llegar a compilar porque no lo contempla como algo valido. 
//en cin.ignore() puedo poner cualquier cosa que yo quiera que ignore en el argumento?	cin.ignore buscar e investigar, signatures. un metodo son muchos metodos con el mismo nombre pero dependiendo que argumento le pases va a funcionar diferente
//cin.ignore() no es una funcion es un metodo? que son exactamante los metodos?		.metodo, es una clase abstracta
