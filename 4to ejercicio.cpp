#include<stdio.h>

int main()
{
	//numeros negativos
	int n;
	printf("Escribe un numero:\n");
	scanf("%d", &n);
	
	while (n>0.0)
	{
		printf("Escribe otro numero:\n");
		scanf("%d", &n);
	}
		
	return 0;
}
