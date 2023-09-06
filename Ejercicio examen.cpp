#include<stdio.h>

int main()
{
	//Da las tablas de multiplicar
	
	int i=1, n, e, mul;
	printf("Escribe la tabla que quieres obtener:\n");
	scanf("%d", &n);
	printf("Escribe hasta que numero quieres la tabla:\n");
	scanf("%d", &e);
	
	if (e<=0)
	{
		printf("Error, el numero no puede ser menor de 1");
	}
	else
	{
		while(i<=e)
		{
			mul= n * i;
			printf("%d", n);
			printf("*");
			printf("%d", i);
			printf("=");
			printf("%d\n", mul);
			++i;
		}
	}
	return 0;
}
