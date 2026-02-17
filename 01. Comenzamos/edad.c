/*

Realiza un programa que pida al usuario su año de nacimiento y calcule y escriba en
pantalla su edad.

REalizado por Juanito lksklskls

fecha klsklskl

*/


#include <stdio.h>

int main() {

	int anio;
	char edad; /* también es válido int anio,edad; */
	
	printf ("Dame tu año de nacimiento ....");
	scanf ("%d",&anio);
	
	edad=2017-anio;
	
	printf ("Tienes %d años",edad);
	
	
	
	return 0;
}

