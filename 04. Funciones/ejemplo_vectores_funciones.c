#include <stdio.h>

int suma_elementos (int v[], int n_elem);
void leer_elementos (int v[], int n);


int main(int argc, char *argv[]) {
	
	int vector[5];
	int otro_vector[10];
	
	int resultado1,resultado2;
	
	
	leer_elementos(vector,5);
	
	leer_elementos (otro_vector,10);
	
	resultado1=suma_elementos(vector,5);
	
	resultado2=suma_elementos (otro_vector,10);
	
	printf ("La suma de los elementos del vector es %d",resultado1);
	printf ("La suma de los elementos del otro vector es %d",resultado2);
	
	return 0;
}

int suma_elementos (int v[],int n_elem)
{
	int i,suma=0;
	
	for (i=0;i<n_elem;i++)
		suma=suma+v[i];
	
	return(suma);
	
}

void leer_elementos(int v[],int n)
{
	int i;
	
	printf ("Dame los elementos del vector ...");
	
	for (i=0;i<n;i++)
		scanf("%d",&v[i]);
	

}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
