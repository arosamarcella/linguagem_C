/*
	Name: ManipulaTexto01.cpp
	Author: Rosa Marcella
	Date: 18/11/26 08:29
	Description: Programa para manipulação de arquivos do tipo texto
*/

/* 
	A manipulação de arquivos texto utilisa a biblioteca <stdio.h> e um ponteiro do tipo FILE* para realizar as operções de:
	- ABERTURA (open)
	- LEITURA (read - "r")
	- ESCRITA (write - "w")
	- ANEXAR (append - "a")
	- FECHAR (close)
	
	Funções:
	- fprintf(arquivo, formato, ...)
		escreve um texto formatado como no printf
	- fputs(string, arquivo):
		escreve uma string no arquivo
	- fputc(caractere, arquivo)
		escreve um único caractere
	- fclose(arquivo)
		fecha o arquivop texto
*/
		

# include <stdio.h>
int main(){
	FILE *arq = fopen("alunos.xtx", "w");
	if(arq == NULL){
		perror("Erro ao abrir o arquivo.");
		return 1;
	}
	
	float nota = 9.5;
	fprintf(arq, "Aluno: %s | Nota %.2f\n", "Ana", nota);
	
	if(nota >= 6.0)
		fputs("Status: Aprovado\n", arq);
	else
	fputs("Status: Reprovado\n", arq);
	
	puts("Operacao com arquivo realizada com sucesso!");
		
	fclose(arq);
	}
