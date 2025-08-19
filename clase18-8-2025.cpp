#include<iostream>
using namespace std;
int main(){
	
	/*Estructurado, variables, condiconales, funciones.		OOP es diferente.*/
	/*1 Solicitud de Presupuesto:
	La pyme "ProjectX2" ubicada en la ciudad de Quilmes fabrica máscaras de protección (de acetato) de uso general.
	Maneja dos precios:
	-A partir de las 100 máscaras se considera un precio mayorista de $4000 por cada una.
	-Y para cantidades menores corresponde un precio minorista de $5500 por cada una.
	Requieren un programa que permita  a sus potenciales clientes consultar por un presupuesto, respetando lo siguiente:
	El/la usuario/a deberá ingresar la cantidad de máscaras requeridas y a continuacion el programa deberá mostrar su presupuesto detallando:
	Opciones de Pago
	Pago en efectivo: $x (siendo x el monto asociado).
	Tener en cuenta que el pago en efectivo (o por transferencia bancaria) tiene un descuento del 10% sobre el total.
	3 cuotas (sin interes) de: $x (siendo el valor de cada cuota).
	En este caso, no existe recargo sobre el total - es decir, se manejan con 3 cuotas sin interes.
	6 cuotas de %x (siendo x el valor de cada cuota).
	En este caso, existe un recargo del 30% sobre total.
	12 cuotas de %x (siendo x el valor de cada cuota).
	En este caso, existe un recargo del 60% sobre total.
	
	Por ejemplo:
	Ingrese la cantidad de máscaras requeridas (unidades): 150
	Opciones dePago
	Pago en efectivo: $540000
	3 cuotas (sin interes) de: $200000
	6 cuotas de : $130000
	12 cuotas de: $80000
	*/
	// 100%---5500
	// 10%---x=
	cout<< "Bienvenido a ProjectX2!\n ingrese la cantidad de unidades que desea comprar: ";
	int cantidad=0;
	cin>> cantidad;
	cout<<"\n La cantidad ingresada es de: "<<cantidad;
	if(cantidad>0){		//valido que haya ingresado algo
		int minorista=5500;
		//minorista*=cantidad*100/10;
		float efectivo=0.90;		//es un descuento del 10%, pero a mi me interesa saber como se ve afectado el total, no cuanto es el descuento en si.
		//la cuestion es que el descuento se saca con *0.10, pero deberia ser restado al total.
		int resultado=cantidad*minorista;	//x*5500=
		efectivo=resultado*efectivo;
		cout<<"\nOpciones de pago: \n Pago en efectivo: "<<resultado;
		cout<<"\n3 cuotas sin interes de: "<<resultado*3;
		cout<<"\n6 cuotas de: "<<resultado*6;
		cout<<"\n12 cuotas de: "<<resultado*12;

	}else if(cantidad>=100){
		 int mayorista=4000;
		cout<<"\nOpciones de pago: \n Pago en efectivo: "<<mayorista;
		mayorista*=cantidad/10;
	}
	
	
}
