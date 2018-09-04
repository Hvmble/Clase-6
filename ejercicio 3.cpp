#include <stdio.h>
void superficie (int valor)
{
	int resultado;
	resultado = valor * 4;
	printf("superficie %d\n",resultado);

	
}
void perimetro (int valor)
{
	int resultado;
	resultado = valor * valor;
	printf("perimetro %d \n",resultado);
}
int main() {
	
	for( int i = 10; i<= 20; i++){
		superficie (i);
		perimetro(i);
	}
	
	
	
	return 0;
}

