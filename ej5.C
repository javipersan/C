#include <stdio.h>

int main()
{
	float voltaje;       /* Voltaje medido en voltios.     */
 	float resistencia;   /* Resistencia en ohmios.         */
 	float potencia;      /* Potencia calculada en vatios.  */

	printf("Introduzca el voltaje medido en voltios => ");
 	scanf("%f",&voltaje);
	
	if (voltaje >= 100.0)
	{
		printf("Voltaje es mayor o igual que 100 V\n");
		printf("Introduzca el valor de la resistencia => ");
		scanf("%f",&resistencia);
		
		potencia = voltaje * voltaje / resistencia;
		
		printf("La disipación de potencia es %f vatios.\n",potencia);
 	}
	else
	{
		printf("Voltaje menor a 100V \n");
		printf("Este programa no está preparado para voltajes menores a 100V \n ");	
	}
	
	
	printf("Confirmacion del valor de entrada de %f voltios.",voltaje);
 	
	return (0);
}
