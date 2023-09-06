#include<stdio.h>

int main()
{
	//Suma los digitos de un numero 
	
	int n, r, sum = 0;
	
	printf("Escribe un numero de dos o mas digitos:\n");
	scanf("%d", &n);
	while (n != 0) 
	{
	   	r = n % 10;
	   	n /= 10;
	   	sum += r;
    } 
    printf("La suma de los digitos es: %d", sum);
	return 0;
}
