#include <iostream>
using namespace std;
int main(){
	
	//ejercicio 8
	//un algoritmo que permita al usuario ingresar diez numeros enteros de a uno e indique cual es el mayor de ellos. considere que puede haber numeros repetidso, por ejemplo: a) 3,5,6,8,50,
	
	//declarar variables
		
	int numero,mayor=0, contador=0;		//(mayor va a ser variable auxiliar)
	//mayor no tien ningun valor, lo cargamos con 0
	//Sentencias
	while(contador<10){		//mientras			cuando vale diez ya no, no sigas, o puede ser <=9
		
		cout<<"Ingrese un numero: ";
		cin>>numero;
		cin.ignore();
		contador=contador+1;
		
		if(numero>mayor){
			
			mayor=numero;	
		}
		
	}
	cout<<"El numero mayor es: "<<mayor;
	
	return 0;
}
//probarlo con valores positivos, negativos, 0
//hacer la guia 1, 2 y 3. con lo visto en la clase de hoy alcanza, mañana va a mejorar estos ejercicios, y va a ver el for
