/* 
Prog: Receber um nome no teclado e imprimir quantas letras "A" tem o nome.
Autor: Renata Pereira Martins Gomes
Data de Cria��o: 10/05/2020
Ult. Atulaiza��o: 14/06/2020
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
main()
{
	char nome[30];
	int x,t, a=0;
	printf("\n\t INFORME UM NOME : ");
	//gets(nome);
	scanf("%s",&nome);
	t=strlen(nome);
	for (x=0; x < t; x++)
	{
		if (nome[x] == 'a' || nome[x] == 'A')
			a=a+1;
	}
	printf("\n O nome %s ",(nome));
	printf("tem %d letra a.",a);
	printf("\n\n");
	system("pause");
	return(0);
}
