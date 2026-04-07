/*Programa que pide un número y muestra su tabla de multiplicar
mediante sentencia for */

#include <stdio.h>

int main()
{
	
	int num;
	int i=0;
	
	printf("Introduce un valor: ");
	scanf ("%i", &num);
	
	for(i=1;i<=10;i++)
			printf( "\n   %d * %d = %d", i, num, i * num );

	
	return(0);

	
	
}

