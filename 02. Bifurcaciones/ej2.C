#include <stdio.h>
int main()
{
	float numero;  /* Valor proporcionado por el usuario. */

	printf("Deme un numero del 1 al 10 => ");
	scanf("%f",&numero);
	
	/* Operadores relacionales en C
	> >= < <= != == */
	
	if (numero > 5)     
		printf("El numero es mayor que 5\n");
	else	
		printf("El numero es menor o igual que 5.\n");
	
	printf("El numero leido fue %f.",numero);
	
	return(0);
}
