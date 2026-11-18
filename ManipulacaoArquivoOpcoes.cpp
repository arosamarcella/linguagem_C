/*
	Name: ManipulacaoArquivoOpcoes.cpp
	Author: Rosa Marcella
	Date: 18/11/26 08:29
	Description: Programa para apresentar um menu de opcoes para o usuario perguntando qual operação ele deseja fazer:
					- Criar um arquivo novo ("w")
					- Alterar um conteudo ja existente ("a")
					- Somente ler o conteudo gravado no arquivo ("r")

*/

# include <stdio.h>
# include <windows.h>

void CriarArquivo();
void AlterarArquivo();
void LerArquivo();

char NomeArquivo[20];


int main(){
	while(1){
		int opc = 0;
		puts("Escolha uma operacao para realizar: ");
		puts("1 - Criar um arquivo novo 1\n2 - Alterar um conteudo ja existente 2\n3 - Somente ler o conteudo gravado no arquivo 3\n0 - Encerrar o programa");
		puts("-----------------\n");
		puts("Ecolha sua opcao:");
		scanf("%d", &opc);
		
		system("cls");
		
	
		switch(opc){
			case 1: puts("Voce digitou 1\n");
					CriarArquivo();
					break;
			
			case 2: puts("Voce digitou  2\n");
					AlterarArquivo();
					break;
			
			case 3: puts("Voce digitou 3\n");
					LerArquivo();
					break;
					
			case 0: exit(0);
					
			default: puts("Opcao invalida - REDIGITE!");
		} // Fim do switch
		
		system("pause");
		system("cls");
	
	} // Fim do while
	
} // Fim do main

// Função para criar um arquivo
void CriarArquivo(){
	puts("Digite o conteudo do novo arquivo: ");
	gets(NomeArquivo);
	
	FILE *arq = fopen("NovoArquivo.xtx", "w");
	
	if(arq == NULL){
		perror("Erro ao abrir o arquivo.");
	}
	
	for(int i = 0; NomeArquivo[i] != '\0'; i++)
		printf(arq, "%c", NomeArquivo[i]);


	puts("Arquivo Criado!");
	fclose(arq);
	
	
	
	
	
	
	
}


