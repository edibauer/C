#include <stdio.h>

//Se colocan los prototipo de las funciones
int sumar (int, int);

//Se coloca el metodo main
int main (){
	
	//Se colcan las variables globales
	int numero1;
	int numero2;
	int resultado;
	
	//Se piden las variables al usuraio y se guardan
	printf ("Coloca el primer numero: ");
	scanf ("%i", &numero1);
	
	printf ("Coloca el segundo nummero: ");
	scanf ("%i", &numero2);
	
	//Se llama a la función
	resultado = sumar (numero1, numero2);
	
	//Se imprime a usuario
	printf ("El resultado de la suma es: %i", resultado);
	
	return 0;
}

//Funciones
int sumar (int numUno, int numDos){
	//Se crean las varaibels locales para esta función
	//int numUno;
	//int numDos;
	int result;
	
	//Se resuelve matematicamnete
	result = numUno + numDos;
	
	//Todas la funciones retornan un valor
	return result;
	
}
