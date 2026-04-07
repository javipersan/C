#include <stdio.h>
#include <conio.h>

/* 
Este ejemplo usa la función getch para obtener un carácter desde teclado
sin necesidad de presionar INTRO, tampoco produce eco

Funciones similares: 	getche() ---> produce eco en pantalla del carácter tecleado
						getchar() ---> produce eco pero requiere INTRO

Mejóralo para que admita también valores en minúscula: 's' o 'n' 

*/


int main(int argc, char *argv[]) {
	
	char respuesta;
		
	printf ("Eres mayor de edad?  (S/N) ");
	
	do
	{
		respuesta=getch();
	}	
	while(respuesta!='S' && respuesta!='N');
	
	printf ("\nHas introducido el carácter..... %c",respuesta);
	
	return 0;
}

