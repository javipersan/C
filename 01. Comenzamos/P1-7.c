#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/* Ejemplo:
	
	mismos valores constantes en diferentes formatos 
	asignados a	diversas variables*/
	
	int a='A'; /*carácter*/
	int b=65; /*decimal*/
	int c=0101; /*octal - comienza por 0*/
	int d=0x41; /*hexadecimal - comienza por 0x*/
	
	printf ("a=%d , b=%d , c=%d, d=%d",a,b,c,d);
	
	return 0;
}

