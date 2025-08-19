//1. Programación en C++ || Primer programa en C++
//https://www.youtube.com/watch?v=ld4nzao5XAc&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh&index=5
//Primer programa en C++

#include<iostream>					//libreria: input-output stream, para que puedan tener salidas y entradas de datos los programas que hagamos en cpp. # = octothorp

using namespace std;				//para evitar poner "std::cout<<" cada vez que quiero mostrar un output

int main(){							//función principal, adentro ponemos el codigo
	
	cout<<"Hola mundo :D"<<endl;	//endline: salto de linea.
//  cout<<"Hola mundo :D\n";		  alternativa (alt+92) \n = newline. (otra forma de hacer un salto de linea)
	
	return 0;						//es una funcion de tipo entero, por lo tanto tiene que retornarme algo para que el programa detecte que ha finalizado todo correctamente. P Es decirle al programa "ya terminaste, pero todo ha finalizado okay"
}
