	/*guia 2 ejercicio 6 CON FALLAS
	se ingresan 3 numeros, verificar cual es el mayor */

#include <iostream>
using namespace std;

int main(){
	//declaracion de variables
	float numero1=0, numero2=0, numero3=0;
	
	cout<<"Ingrese el primer numero";
	cin>>numero1;
	cin.ignore();
	cout<<"Ingrese el segundo numero";
	cin>>numero2;
	cin.ignore();
	cout<<"Ingrese el tercer numero";
	cin>>numero3;
	cin.ignore();	
	
	if(numero1>numero2 and numero1>numero3){
		cout<<"El mayor es: "<<numero1;
	}else if(numero2>numero3){	//el numero 1 ya no lo tengo en cuenta.		en realidad, dentro de este else, hay otro if else. aunque se escriba todo junto.
		cout<<"El mayor es: "<<numero2;
	}else{
		cout<<"El mayor es: "<<numero3;
	}
	
	
	return 0;
}	//hacer toda la guia 2 excepto los que tienen ciclos repetitivos. (for)?
