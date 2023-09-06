#include<stdio.h>

int main()
{
	//imprime 10 numeros
	
	int i, e;
	
	printf("Desde que numero quieres sumar:\n");
	scanf("%d", &i);
	printf("Se va a sumar desde: %d\n", i);
	printf("\n");
	printf("Hasta que numero quieres sumar:\n");
	scanf("%d", &e);
	printf("Se va a sumar hasta: %d\n", e);
	
	while (i<=e)
	{
		printf("%d\n", i); 
		i++;
	}
	return 0;
}
