#include <stdio.h>

/* Este ejemplo muestra en pantalla la cadena "hola" 10 veces
mediante el uso de la sentencia for*/

int main(int argc, char *argv[]) {
	
	int i;
	
	for (i=1;i<=10;i++)		//inicialización;condicion;incremento
		printf ("HOLA\n"); //no se necesitan {} al ser sólo una la sentencia contenida en el cuerpo del bucle
		
	printf ("Esta instruccion está fuera del bucle");
		
	return 0;
}

