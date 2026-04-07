/*Programa que pida un nº y escriba “hola” tantas veces como indique el 
número. Mediante sentencia while*/		


#include <stdio.h>

int main() 
{
	int numero, i;
	
	i=1;
	
	printf ("Introduce un numero: ");
	scanf ("%i", &numero);
	
	while (i <= numero)
	{
		printf ("Hola  %d\n",i);
		i=i+1; //ó i++
	}
	
	printf ("\nFin del programa");
	
	return 0;
}

