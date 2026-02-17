#include <stdio.h>
int main()
{
	float numero;  /* Valor proporcionado por el usuario. */

	printf("Deme un numero del 1 al 10 => ");
	scanf("%f",&numero);
	
	if (numero > 5)
		printf("El numero es mayor que 5.\n");
	
					/*lo que viene a continuación estaría fuera del if 
					y por lo tanto se ejecutaría siempre*/

	printf("El numero leido fue %f.",numero);
	
	return(0);
}

