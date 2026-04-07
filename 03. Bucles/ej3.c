/*Programa que pide un número y muestra su tabla de multiplicar
mediante sentencia while */

#include <stdio.h>


int main()
{
	
	int num;
	int i=1;
	
	printf("Introduce un valor: ");
	scanf ("%i", &num);
	
	while(i<=10)
	{
		printf( "\n   %d * %d = %d", i, num, i * num );
		i++;
	}

	return (0);
	
}

