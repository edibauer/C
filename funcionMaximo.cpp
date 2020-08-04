#include <stdio.h>

//prototipo de funciones
int calcularMaximo (int, int, int);
void imprimir (int, int, int);

//Se coloca el metodo main 
int main (){
	
	//Se colocan las variables locales de la funcion main
	int numUno;
	int numDos;
	int numTres;
	int maximo;
	
	//Se piden los valaores al usurasio
	printf ("Ingrese ters numeros enteros: ");
	scanf ("%i %i %i", numUno, numDos, numTres);
	
	//Se imprimen los numeros
	imprimir (numUno, numDos, numTres);
	
	//Se determina el maximo
	maximo = calcularMaximo (numUno, numDos, numTres);
	
	//Se impime el resultado
	printf ("El maximo es: %i", maximo);
	
	return 0;
}

//***********************************************************
//Se crean las funciones
int calcularMaximo (int a, int b, int c){
	
	//Se crea la variable locales
	int mayor;
	//Se incializa la variable
	mayor = a;
	
	if (b > mayor)
		mayor = b;
	if (c > mayor)
		mayor = c;
	return mayor;
}

void imprimir (int a, int b, int c){
	
	printf ("Usted ingresó los siguientes numeros: %i %i %i \n", a,b,c);
}
