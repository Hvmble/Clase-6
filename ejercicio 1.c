#include <stdio.h>
#include <math.h>
 int raiz ( int num) // función con retorno

 { 
	int resultado; // Declaración de una variable
    resultado = sqrt(num); // se calcula la raiz cuadrada
	return resultado; // retorna el resultado
 }
 
 // función principal
int main() {
	int numero; // Declaración de una variable
	printf ("Ingrese un numero\n"); // se muestra mensaje
	scanf("%d",&numero); // el dato ingresado se asigna a la variable numero
	printf (" La raiz cuadrada de %d.", numero ); printf ("es: %d\n", raiz(numero));// se muestra mensaje con el resultado
	return 0;
}

