/* 
Prog: Escrever seu nome na tela 10 vezes. Um nome por linha.
Autor: Renata Pereira Martins Gomes
Data de Cria��o: 10/05/2020
Ult. Atulaiza��o: 14/06/2020
*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	int x;
	char nome[30]="Renata Pereira Martins Gomes";
	for (x=1;x <=10; x++)
		printf("\n%s", nome);
	printf("\n");
	system("pause");
	return 0;
}
