#include <stdio.h>

int main() {
	
	int v1;
	
	printf ("Introduce un valor para la variable.... ");
	
	// para pedir valores se usa la funcion scanf
	
	scanf ("%d",&v1);
	
	printf ("El valor de la variable es %d \n",v1);
	
	printf ("El valor de la variable es %o \n",v1);
	
	printf ("El valor de la variable es %x \n",v1);
	
	printf ("El valor de la variable es %c \n",v1);
	
	printf ("El valor de la variable es %c %d %x\n",v1,v1,v1);
	
	return 0;
}

