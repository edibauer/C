#include <stdio.h>

//Se incluye el metodo main
int main (){
	//Se crean las variables
	int numUno;
	int numDos;
	
	//Se pide el primer valor
	printf ("Ingrese el primer valor");
	//Se escana el primer valor y se guarda
	scanf ("%i", &numUno);
	
	//Se pide el segundo valor
	printf ("Ingrese el segundo valor");
	//Se escana el primer valor y se guarda
	scanf ("%i", &numDos);
	
	//Se ooloca le metodo if
	if (numUno > numDos){
		printf ("El primer número es el mayor");
	} else {
		printf ("El segundo número es el mayor");
	}
	
}
