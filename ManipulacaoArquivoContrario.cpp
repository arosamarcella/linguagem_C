/*
	Name: ManipulacaoArquivoContrario.cpp
	Author: Rosa Marcella
	Date: 18/11/26 08:29
	Description: Programa para ler uma frase gravada em um arquivo e mostrar na tela a frease ao contrario, ao final gravar a frase no mesmo arquivo.
*/

# include <stdio.h>
# define MAX_LINHA 30

int main(){
	int i = 0;
	FILE *arq = fopen("ArquivoContrario.txt", "w");
	if(arq == NULL){
		perror("Erro ao abrir o arquivo.");
		return 1;
	}
	
	fputs("Ola! Tudo bem?", arq);
	
	char palavra[30]; 
	
	
//	char linha[MAX_LINHA];
//	while(fgets(linha, sizeof(linha), arq) != NULL){
//		printf("%s\n\n", linha);
	}
	
	for(i = 0; palavra[i] != '\0'; i++)
		printf("%c", palavra[i]);
		
	for(i; palavra[i] != '\0'; i--)
		printf("%c", palavra[i]);	
		
	fclose(arq);
	}
