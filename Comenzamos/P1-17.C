#include <stdio.h>
/*
Programa: Conversión de grados Fahrenheit a grados centigrados
Desarrollado por: Cualquier programador

Descripción: Este programa convierte una temperatura leida en grados 
	      Fahrenheit a su equivalente en grados centigrados.

Variables: 
		Fahrenheit   = Temperatura en grados Fahrenheit
		centígrados = Temperatura en grados Celsius

Constantes: ninguna
*/

int main()
{
     float temp_fahrenheit;
     float temp_centigrados;

     /* Explicar el programa al usuario. */
     puts("");
     puts("Este programa convertira una temperatura leida en");
     puts("grados Fahrenheit a su equivalente en");
     puts("grados centigrados.");
     puts("");
     puts("Introduzca la temperatura en grados Fahrenheit");
     puts("y el programa hara el resto.");

     /* Obtener el valor Fahrenheit del usuario. */
     puts("");
     printf("Introduzca la temperatura en grados Fahrenheit => ");
     scanf("%f", &temp_fahrenheit);

     /* Realizar los cálculos. */
     temp_centigrados = 5/9 * (temp_fahrenheit - 32);

     /* Mostrar la respuesta. */
     puts("");
     printf("Una temperatura de %f grados Fahrenheit \n", temp_fahrenheit);
	 
     printf("es igual a %f grados centigrados. \n", temp_centigrados);
	 
	 return (0);
}
