#include <stdio.h>

/* ejemplo de funcion básica que no requiere parámetros 
ni devuelve valor*/
void f1(void)
{
	printf("hola\n\n\n\n");
	
}
void f1bis(int n)
{
	int i;
	
	for (i=1;i<=n;i++)
		printf("hola\n\n\n\n");
	
}

/* ejemplo de funcion básica que no requiere parámetros 
y devuelve un valor entero*/

int f2(void)
{
	int x; /*declaración de variables locales a la función*/
	
	x=56*4; /* esta sencilla asignación sin sentido podemos reemplazarla por otra más compleja*/
	
	return(x);
}

/* ejemplo de función básica que requiere 1 parámetro entero 
y devuelve el valor absoluto de un número */

int mi_abs(int numero)
{
	
	int resultado;
	
	if (numero<0)
		resultado=-numero;
	else
		resultado=numero;
	
	return (resultado);
	
}



int main() 
{
	int r;
	
	
	//r=mi_abs(-5);
	
	printf ("El valor de la funcion ha sido %d..",mi_abs(-5));
	
	
	
	return 0;
}

