/*
	Name: ManipulaTexto03.cpp
	Author: Rosa Marcella
	Date: 18/11/26 08:29
	Description: Programa para adicionar texto a um arquivo ja existente
*/

# include <stdio.h>

int main(){
	FILE *arq = fopen("alunos.xtx", "r"); // append
	if(arq == NULL){
		perror("Erro ao abrir o arquivo.");
		return 1;
	}
	
	fprintf(arq, "\n\n =====> Fim do arquivo!");
	fputs("Alterado por ROSA em 18/nov/2026", arq);
		
	fclose(arq);
	puts("Arquivo modificado com sucesso!");
}
