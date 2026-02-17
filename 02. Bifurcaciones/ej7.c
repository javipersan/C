#include <stdio.h>
#define PI 3.141592

int main()
{
	int eleccion;   /* elección del usuario. */
 	float longitud;   /* longitud del lado o del radio. */
 	float area;       /* área en unidades cuadradas.    */

	printf("\n\nEste programa calcula el area de\n");
	printf("un cuadrado o de un circulo.\n");
	printf("\nElija un numero:\n");
	printf("A] Area de un circulo. B] Area de un cuadrado.\n"); 
	
	printf("Su eleccion (A o B) => ");
	scanf("%c",&eleccion);
	
	
	switch(eleccion)
	{
	
		case 97:
		case 'A':	
		
			printf("Deme la longitud del radio del circulo => "); 
			scanf("%f",&longitud);
			area = PI * longitud * longitud;
			printf("Un circulo de radio %f tiene un area de ",longitud);
			printf("%f unidades cuadradas.",area);
			
			break;
			
		case 'b':
		case 'B':
			
			printf("Deme la longitud de un lado del cuadrado => ");
			scanf("%f",&longitud);
			area = longitud * longitud;
			printf("Un cuadrado de longitud %f tiene un area de ", longitud);
			printf("%f unidades cuadradas.",area);
		
			break;
		
		default:
			
			printf("Eleccion incorrecta.\n");
			printf("Debe ejecutar el programa de nuevo\n"); 
			printf("seleccionando A o B.\n");
	}
	
	
	

	printf("\n\nAqui termina el programa que calcula\n"
			"el area de un circulo o un cuadrado.");
	
	return(0);
}
