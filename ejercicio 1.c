#include <stdio.h>
#include <math.h>
 int raiz ( int num) // funci�n con retorno

 { 
	int resultado; // Declaraci�n de una variable
    resultado = sqrt(num); // se calcula la raiz cuadrada
	return resultado; // retorna el resultado
 }
 
 // funci�n principal
int main() {
	int numero; // Declaraci�n de una variable
	printf ("Ingrese un numero\n"); // se muestra mensaje
	scanf("%d",&numero); // el dato ingresado se asigna a la variable numero
	printf (" La raiz cuadrada de %d.", numero ); printf ("es: %d\n", raiz(numero));// se muestra mensaje con el resultado
	return 0;
}

