#include<stdio.h>
#include<locale.h>
//Switch para informar os dias de rodizio dos carros;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	unsigned int a;
	
	printf("\nDigite os números da placa do veiculo:");
	scanf("%u", &a);
	
	if (a>=1000)
	{
	
	switch(a % 10)
	{
		case 1 : case 2 : printf("\nSegunda-feira"); break;
		case 3 : case 4 : printf("\nTerça-feira"); break;
		case 5 : case 6 : printf("\Quarta-feira"); break;
		case 7 : case 8 : printf("\nQuinta-feira"); break;
		case 9 : case 0 : printf("\nSexta-feira"); break;
		default: break;
}
	}
	else
	{
		printf("Placa inválida");
	}
}
