	/*guia 2 ejercicio 1 CON FALLAS
	ver validacion de datos. siempre se ingresan como caracteres, como letras. los datos se validan y una vez que tenemos la garantia de que el dato se ingres+o bien, lo cargamos en la varible. por eso se suele decir que todos los datos son de tipo string,  hasta que se validan y ahi recien pasan */

#include <iostream>
using namespace std;

int main(){
	//declaracion de variables
	float numero1=0, numero2=0;
	cout<<"Ingrese el primer numero";
	cin>>numero1;
	cin.ignore();
	cout<<"Ingrese el segundo numero";
	cin>>numero2;
	cin.ignore();
	cout<<"numero1: "<<numero1<<endl;
	cout<<"numero2: "<<numero2<<endl;
	//errores de sintaxis, errores lógicos, validacion de datos. todo se ingresa como cadena, lo valida y lo guarda
	
	return 0;
}
