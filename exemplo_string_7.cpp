/* 
Prog: Receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres.
Autor: Renata Pereira Martins Gomes
Data de Cria��o: 10/05/2020
Ult. Atulaiza��o: 14/06/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
main()
{
	int x,tam;
	char nome[30];
	printf("Digite um nome: ");
	gets(nome);
	tam = strlen(nome);
	for (x=1; x <= tam; x++)
		printf("\n%s",nome);
	printf("\n\n");
	system("pause");
}
