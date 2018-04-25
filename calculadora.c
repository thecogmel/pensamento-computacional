#include <stdio.h>

float soma (float n1,float n2){
	float result;

	result=n1+n2;
	return result;
}

float sub (float n1, float n2){
	float result;

	result=n1-n2;
	return result;
}

float mult (float n1, float n2){
	float result;

	result=n1*n2;
	return result;
}

float div (float n1, float n2){
	float result;

	result=n1/n2;
	return result;
}
int main(int argc, char const *argv[]) {

	char operator;
	float n1 = 0, n2 = 0, result = 0;

	printf("Bem vindo a caculadora C. Digite\n");
	printf("a operação que deseja: (+ - * /)\n");
	scanf ("%c", &operator);
		
		if (operator == '+')
		{
			printf("Soma selecionada\n");
			printf("Digite o primeiro número\n");
			scanf ("%f", &n1);
			printf("Digite o segundo número\n");
			scanf ("%f", &n2);
				result = soma (n1,n2);
				printf("O resultado é: %.2f\n", result);
			
		} else if (operator == '-')
		{
			printf("Subtração selecionada\n");
			printf("Digite o primeiro número\n");
			scanf ("%f", &n1);
			printf("Digite o segundo número\n");
			scanf ("%f", &n2);
				result = sub (n1,n2);
				printf("O resultado é: %.2f\n", result);
				
		} else if (operator == '*')
		{
			printf("Multiplicação selecionada\n");
			printf("Digite o primeiro número\n");
			scanf ("%f", &n1);
			printf("Digite o segundo número\n");
			scanf ("%f", &n2);
				result = mult (n1,n2);
				printf("O resultado é: %.2f\n", result);
			
		} else if (operator == '/')
		{
			printf("Divisão selecionada\n");
			printf("Digite o primeiro número\n");
			scanf ("%f", &n1);
			printf("Digite o segundo número\n");
			scanf ("%f", &n2);
				result = div (n1,n2);
				printf("O resultado é: %.2f\n", result);
			
		} else printf("Você não selecionou um caracter válido!\n");
	return 0;
}