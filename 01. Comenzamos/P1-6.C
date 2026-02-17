#include <stdio.h>

int main()
{
     int mi_variable; /*declara una variable entera */
	 float otra_variable;
	 float operacion;/* Declara una variable real */
     
	 printf ("dame un valor  ");
	 scanf ("%d",&mi_variable);
	 
	 printf ("dame otro valor  ");
	 scanf ("%f",&otra_variable);
	 
	 printf ("la variable vale: %d\n",mi_variable);
	 
	 printf ("la 2ª variable vale: %f\n",otra_variable);
	 
	 operacion=mi_variable*otra_variable;
	 
	 printf ("El resultado es %f ",operacion);
 
	 
	return(0);
	 
}
