#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n=15;
	
	printf ("Hola mundo\n");
	
	printf ("El valor de la variable en decimal %d\n",n);
	printf ("El valor de la variable en hexadecimal %X\n",n);
	printf ("El valor de la variable en octal %o\n",n);
	printf ("%d  %o  %x  ",n,n,n);
	system ("pause");
	
	return(0);
}

