/* 
Prog: Ler nome, endere�o, telefone e imprimir
Autor: Renata Pereira Martins Gomes
Data de Cria��o: 10/05/2020
Ult. Atulaiza��o: 14/06/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	char nome[30], endereco[30], telefone[15];
	printf("Informe seu nome: ");
	gets(nome);
	printf("Informe seu endereco: ");
	gets(endereco);
	printf("Informe seu telefone: ");
	gets(telefone);
	printf("\n\nNome: %s\n\n",nome);
	printf("Endereco: %s\n\n",endereco);
	printf("Telefone: %s\n\n",telefone);
	system("PAUSE");
	return 0;
}
