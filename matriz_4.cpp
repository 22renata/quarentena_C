/* 
MATRIZ
Programa 04: Criar um algoritmo que leia os elementos de uma matriz inteira de 3 x 3 e
imprimir outra matriz multiplicando cada elemento da primeira matriz por 2. 
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
	int linha, coluna, v=3;
	int vet[v][v], vet2[v][v];
	
	setlocale(LC_ALL, "portuguese");
	printf("A matriz 3x3 é: \n");
	for(linha=0;linha<v;linha++)
	{
		for(coluna=0;coluna<v;coluna++)
		{		
			vet[linha][coluna]=rand()%10;
			printf("%i\t", vet[linha][coluna]);
			vet2[linha][coluna]=vet[linha][coluna]*2;
		}
		printf("\n");
	}
	printf("\nA matriz vezes 2 é:\n");
	for(linha=0;linha<v;linha++)
	{
		for(coluna=0;coluna<v;coluna++)	
		{
			printf("%i\t", vet2[linha][coluna]);
							
		}
		printf("\n");	
	}
		

}
