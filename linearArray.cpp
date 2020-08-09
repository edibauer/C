#include <stdio.h>

int main () {

	//Creacion del tipo de array 
	typedef int tVectorInt [9];
	
	//Creacion de la variable que contiene los array
	tVectorInt numPersonas;
	
	//Asignacion de elementos
	numPersonas [0] = 1;
	numPersonas [1] = 2;
	numPersonas [2] = 3;
	
	//para impresion
	int pos1 = numPersonas [0];
	int pos2 = numPersonas [1];
	int pos3 = numPersonas [2];
		
	printf ("Las personas en el vector son: %i\n", pos1);
	printf ("Las personas en el vector son: %i\n", numPersonas [1]);
	printf ("Las personas en el vector son: %i", numPersonas [2]);
	return 0;
	
}
