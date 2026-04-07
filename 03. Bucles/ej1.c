#include <stdio.h>

/* Este ejemplo muestra en pantalla la cadena "hola" 10 veces
mediante el uso de la sentencia while*/

int main(int argc, char *argv[]) {
	
	int i; // declaramos variable contadora/centinela
	
	i=1; //inicializamos la variable
	
	while (i<=10)
	{
		printf ("HOLA\n");
		i=i+1; // incremento de la variable centinela
	}
	printf ("Esta instruccion está fuera del bucle");
	
	
	return 0;
}

