/* Programa: Modelo de estrutura em (cliente) struct aninhada
Autor: Renata Pereira Martins Gomes
Data de criação: 13/06/2020
Data de Modificação: 13/06/2020
*/
#include <stdio.h>
#include<locale.h>
typedef struct 
        {
        char rua [50];
        int numero;
        char bairro[20];
        char cidade[30];
        char sigla_estado[3];
        long int CEP;
        } TEndereco;
typedef struct 
        {
        char nome [50];
        long int telefone;
        TEndereco endereco;
        }TFicha;
main()
{
	TFicha cliente;
	TEndereco endereco;
    setlocale(LC_ALL,"");
    printf("\n---------- Cadastro de cliente -----------\n\n\n");
    printf("Nome do cliente.......: ");
    gets(cliente.nome);
    printf("Rua.......: ");
    gets(cliente.endereco.rua);
    printf("Número.......: ");
    scanf("%d",&cliente.endereco.numero);
    fflush(stdin); // Inclui depois de cada scanf() para evitar o buffer de teclado
    printf("Bairro.......: ");
    gets(cliente.endereco.bairro);
    printf("Cidade.......: ");
    gets(cliente.endereco.cidade);
    printf("Estado.......: ");
    gets(cliente.endereco.sigla_estado);
    printf("CEP.......: ");
    scanf("%d",&cliente.endereco.CEP);   //faltou o &
    fflush(stdin); // Inclui depois de cada scanf() para evitar o buffer de teclado
    printf("TELEFONE.......: ");
    scanf("%d",&cliente.telefone); //faltou o &
    fflush(stdin); // Inclui depois de cada scanf() para evitar o buffer de teclado
    printf("\n---------- Lista de clientes -----------\n\n\n");
    printf("Cliente: %s \n Endereço:\n Rua: %s n.: %d \n Bairro: %s \n Cidade: %s \n Estado: %s \n CEP %d \n",cliente.nome,cliente.endereco.rua,cliente.endereco.numero,cliente.endereco.bairro,cliente.endereco.cidade,cliente.endereco.sigla_estado,cliente.endereco.CEP );
    return 0;
}
