/* 
MATRIZ
Programa 02: Criar um algoritmo que leia os elementos de uma matriz inteira de 4 x 4 e
imprime os elementos da diagonal principal. 

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
	int linha, coluna, d, f=4;
	int vet[f][f];
	
	setlocale(LC_ALL,"portuguese");
	
	
	printf("A matriz é:\n");
	
	for(linha=0;linha<f;linha++)
	{
		for(coluna=0;coluna<f;coluna++)
		{
		
		vet[linha][coluna]= rand()%100;
		printf("%i\t", vet[linha][coluna]);
		}
		printf("\n");	
	}
	
	printf("\n\nA diagonal principal é:\n");
	for(d=0;d<f;d++) printf("%i\t", vet[d][d]);
	
}
