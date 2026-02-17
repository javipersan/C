#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char letra;
	
	printf ("Introduce un carácter ....");
	scanf ("%c",&letra);
	
	printf ("El caracter introducido es %c y su código ascii es %d",letra,letra);
	
	if (letra>='A' && letra<='Z')
		letra=letra+32;
	
	printf ("El nuevo valor de la letra es %c",letra);
	
	return 0;
}

