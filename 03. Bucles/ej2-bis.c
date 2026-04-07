/*Programa que pida un nº y escriba “hola” tantas veces como indique el 
número. Mediante sentencia for*/		

#include <stdio.h>

int main() 
{
	int numero, i;
	
	printf ("Introduce un numero: ");
	scanf ("%i", &numero);
	
	for (i=1; i <= numero; i=i+1)
		printf ("Hola %i \n", i);
	
	printf ("\nFin del programa");
	
	return 0;
}

