/*
	Name: ManipulaTexto02.cpp
	Author: Rosa Marcella
	Date: 18/11/26 08:29
	Description: Programa para manipular um arquivo texto ja existente
*/

# include <stdio.h>
# define MAX_LINHA 128

int main(){
	FILE *arq = fopen("alunos.xtx", "r"); // read
	if(arq == NULL){
		perror("Erro ao abrir o arquivo.");
		return 1;
	}
	
	char linha[MAX_LINHA];
	while(fgets(linha, sizeof(linha), arq) != NULL){
		printf("%s", linha);
	}
	
//	for(int i = 0; linha[i] != '\0'; i++)
//		printf("%c", linha[i]);
		
	fclose(arq);
}
