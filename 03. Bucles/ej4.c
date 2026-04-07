/* Programa que pide números enteros (tantos como indica la constante VECES)
y calcula la media de los valores */

#include <stdio.h>
#define VECES 5 /* Defino la constante simbólica VECES como 5 */



int main()
{
	int i,n;
	int suma=0; //variable acumuladora inicializada a 0
	float media;
	
	for (i=1;i<=VECES;i++)
	{
		printf ("Dame el numero (%i/%i):",i,VECES);
		scanf ("%d",&n);
		
		suma=suma+n; //acumula el nuevo valor de n
	}
	
	media=suma/(float)VECES; //typecast: fuerza a considerar la constante VECES como float
	
	printf ("La media de los %d numeros es: %f",VECES,media);
	
	return(0);
}
