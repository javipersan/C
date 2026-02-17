#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#define PI 3.141592

int main()
{
	char eleccion;   /* elección del usuario. */
 	float longitud;   /* longitud del lado o del radio. */
 	float area;       /* área en unidades cuadradas.    */

	printf("\n\nEste programa calcula el area de\n");
	printf("un cuadrado o de un circulo.\n");
	printf("\nElija un numero:\n");
	printf("A] Area de un circulo. B] Area de un cuadrado.\n"); 
	
	printf("Su eleccion (A o B) => ");
	scanf("%c",&eleccion);
 	
	eleccion=toupper(eleccion);
	
	
	if (eleccion == 'A' )
	{
		printf("Deme la longitud del radio del circulo => "); 
		scanf("%f",&longitud);
		area = M_PI * pow(longitud,2);
		printf("Un circulo de radio %f tiene un area de ",longitud);
 		printf("%f unidades cuadradas.",area);
	}
	else
		if (eleccion == 'B' )
		{
			printf("Deme la longitud de un lado del cuadrado => ");
			scanf("%f",&longitud);
			area = pow(longitud,2);
			printf("Un cuadrado de longitud %f tiene un area de ", longitud);
			printf("%f unidades cuadradas.",area);
		}
		else
		{
			printf("Eleccion incorrecta.\n");
			printf("Debe ejecutar el programa de nuevo\n"); 
			printf("seleccionando un 1 o un 2.\n");
		}
	
	printf("\n\nAqui termina el programa que calcula\n"
			"el area de un circulo o un cuadrado.");
	
	return(0);
}
