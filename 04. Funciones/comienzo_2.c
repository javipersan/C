#include <stdio.h>

/* Aquí tienes el ejemplo anterior con la diferencia:

Las implementaciones de las funciones propias están a continuación
de la función main. Delante habrá que colocar sólo la cabecera o propotipo
de las mismas para que el compilador las tenga en cuenta.

Este método estructura mejor los programas y es el que habitualmente se usa*/



/* prototipos de mis funciones */
//void f1(void);
int f2(void);
int mi_abs(int numero);



int main(int argc, char *argv[]) {
	
	int i;
	int r;
	int n;
	
	
	for (i=1;i<=100;i++)
			f1(); /*llamada a función f1*/
	
	r=f2(); /* llamada a función f2*/
	
	printf ("El valor de la variable r es %d\n",r);
	
	printf ("dame un número ...");
	scanf ("%d",&n);
	
	
	printf ("El valor absoluto de %d es %d",n,mi_abs(n));
	
	
	
	return 0;
}

/* ejemplo de funcion básica que no requiere parámetros ni devuelve valor*/
void f1(void)
{
	printf("hola\n\n\n\n");
	
}


/* ejemplo de funcion básica que no requiere parámetros y devuelve un valor entero*/
int f2(void)
{
	int x; /*declaración de variables locales a la función*/
	
	x=56*2; /* esta sencilla asignación sin sentido podemos reemplazarla por otra más compleja*/
	
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
