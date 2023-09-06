#include<stdio.h>

int main()
{
	//Suma n numeros enteros
	
	int i=1, n, sum=0;
	printf("Escribe hasta que numero quieres que se sume:\n");
	scanf("%d", &n);
	
	while(i<=n)
	{
		sum +=i;
		++i;
	}
	
	printf("La suma es: %d", sum);
	
return 0;
}
