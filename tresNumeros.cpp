#include <stdio.h>

//Se coloca el método main
int main () {
	
	//Se colcan las variables
	int numUno;
	int numDos;
	int numTres;
	
	bool logica1 = true;
	
	//Se piden lo svalores y se guardan
	printf ("Ingesa el primer valor: ");
	scanf ("%i", &numUno);
	
	printf ("Ingresa el segundo valor: ");
	scanf ("%i", &numDos);
	
	if (numUno != numDos){
		printf ("Ingresa el tercer valor: ");
		scanf ("%i", &numTres);
		
		if (numTres != numUno && numTres != numDos){
			printf ("Los tres valores ingresados son diferentes, se rpoece a realizar el calculo\n");
			
			//Seleccionde los nuemros
			if (numTres > numUno && numTres > numDos){
				printf ("El tercer numero es el mayor");
				
			} else if (numDos > numUno && numDos > numTres){
				printf ("El segundo numero es el mayor");
						
			} else {
				printf ("El primer numero es el mayor");
			}
			//Fin de la seleccion de numeros
			
		} else {
			printf ("Hay dos números iguaes, ingres numeos difernetes");
		}
		
	} else {
		printf ("Hay dos numeros iguales, ingresa numeros distintos");
	}
	
	
		
	

	
	
	

	
		
}
