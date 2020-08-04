#include <stdio.h>

//Se coloca el método main
int main () {
	
	//Se declaran las varibales
	int numUno;
	int numDos;
	int result;
	
	//Se pide y se guara el primer valor al usuario
	printf ("Digite el primer valor: ");
	scanf ("%i", &numUno);
	
	//Se pide el segundo valor
	printf ("Digite el segundo valor: ");
	scanf ("%i", &numDos);
	
	//Se realiza el cálculo
	result = numUno +numDos;
	
	//Se imprime el resultado
	printf ("El resultado de la suma es: %i", result);
	
}
