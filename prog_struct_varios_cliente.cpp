/* Programa: Modelo de estrutura em (cliente) struct aninhada
Objetivo: realizar o cadastro de 10 clientes

Autor: Renata Pereira Martins Gomes
Data de criação: 13/06/2020
Data de Modificação: 13/06/2020
*/
#include <stdio.h>
#include<locale.h>
#include <conio.h>

//criando a estruct para endereço
typedef struct 
        {
        char rua [50];
        int numero;
        char bairro[20];
        char cidade[30];
        char sigla_estado[3];
        long int CEP;
        } TEndereco;

//criando a estruct para cliente
typedef struct 
        {
        char nome [50];
        long int telefone;
        TEndereco endereco;
        }TFicha;
main()
{
	TFicha cliente[2];
	TEndereco endereco[2];
    setlocale(LC_ALL,"");
    
    printf("\n---------- Cadastro de cliente -----------\n\n\n");
   
	for (int i=0; i<2; i++)
	{
   		printf("Nome do cliente.......: ",i+1);
	    gets(cliente[i].nome);
	    fflush(stdin);
	    
	    printf("Rua.......: ");
	    fflush(stdin);
	    gets(cliente[i].endereco.rua);
	    
	    printf("Número.......: ");
	    scanf("%d",&cliente[i].endereco.numero);
	    fflush(stdin); 
	    
	    printf("Bairro.......: ");
	    gets(cliente[i].endereco.bairro);
	    
	    printf("Cidade.......: ");
	    gets(cliente[i].endereco.cidade);
	    
	    printf("Estado.......: ");
	    gets(cliente[i].endereco.sigla_estado);
	    
	    printf("CEP.......: ");
	    scanf("%d",&cliente[i].endereco.CEP);   
	    fflush(stdin); 
	    
	    printf("TELEFONE.......: ");
	    scanf("%d",&cliente[i].telefone); 
	    fflush(stdin); 
	    printf("\n--------------------\n\n\n");
	}	
	    
	    printf("\n---------- Lista de clientes -----------\n\n\n");
	    
		for (int i=0; i<2; i++)
	    {
			printf("\n---------- CLIENTE -----------\n\n\n");
			printf("Cliente: %s \n Endereço Rua: %s n.: %d \n Bairro: %s \n Cidade: %s \n Estado: %s \n CEP %d \n",cliente[i].nome,cliente[i].endereco.rua,cliente[i].endereco.numero,cliente[i].endereco.bairro,cliente[i].endereco.cidade,cliente[i].endereco.sigla_estado,cliente[i].endereco.CEP );
		    	
		}
	 	getch();
  		return(0);
	
	    
}
