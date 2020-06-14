/* 
MATRIZ
Programa 03: Criar um algoritmo que leia os elementos de uma matriz inteira de 3 x 3 e
imprimir todos os elementos, exceto os elementos da diagonal principal.

AutorA: Renata Pereira Martins Gomes
Data de Criação: 11/05/2020

*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<locale.h>

main()
{	
	
	srand(time(NULL));
	int linha, coluna, d, v=3;
	int vet[v][v];
	
	setlocale(LC_ALL, "portuguese");
	printf("A matriz 3x3 é:\n");
	for(linha=0;linha<v;linha++)
	{
		for(coluna=0;coluna<v;coluna++)
		{
		
		vet[linha][coluna]= rand()%100;
		printf("%i\t", vet[linha][coluna]);
		}
		printf("\n");	
	}
	
		printf("\n\nSua diagonal principal é:\n");
		for(d=0;d<v;d++) printf("%i\t", vet[d][d]);
		printf("\n\nA matriz sem a diagonal principal é:\n\n");
	
	for(linha=0;linha<v;linha++)
	{
		for(coluna=0;coluna<v;coluna++)
		{
		if(linha!=coluna)	//se linha for diferente da coluna, imprime 
		printf("%i\t", vet[linha][coluna]);
		}
		printf("\n");	
	}
}
