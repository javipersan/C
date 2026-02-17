/* Este ejemplo muestra el uso de if anidados*/

#include <stdio.h>

int main()
{
	float numero;  /* Valor proporcionado por el usuario. */

	printf("Deme un numero del 1 al 10 => ");
	scanf("%f",&numero);
	
	if (numero > 5)
		printf("El numero es mayor que 5.\n");
	else
		if (numero<5)
			printf("El numero es menor que 5.\n");
		else
			printf("El numero es 5.\n");
	
	printf("El numero leido fue %f.",numero);
	
	return(0);
}
