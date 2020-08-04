#include <stdio.h>

//Se coloca la funcion suma
int suma (int a, int b);

//Se declra el metodo main
int main (){
	
	//Se declaran las variables iniciales
	int numUno;
	int numDos;
	int result;
	
	//Se incializan los vlores
	numUno = 9;
	numDos = 6;
	result = suma (numUno, numDos);
	
	printf ("El resutado es: %i", result);
	return 0; 
}

//Se crea la funcion
int suma (int a, int b){
	int resultado;
	resultado = a + b;
	return resultado;
}
