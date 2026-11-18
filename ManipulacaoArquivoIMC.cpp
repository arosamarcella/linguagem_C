/*
	Name: ManipulacaoArquivoIMC.cpp
	Author: Rosa Marcella
	Date: 18/11/26 08:29
	Description: Programa para ler um nome, idade, peso e altura para 5 pessoas e, para cada uma delas calcular e analizar seus IMC's, gravando os resultados em um arquivo texto chamado "prontuário".

*/

# include <stdio.h> 
# include <string.h>
# include <windows.h>
//nome, idade, peso e altura


int main(){
	FILE *arq = fopen("prontuario.txt", "a"); 
	if(arq == NULL){
		perror("Erro ao abrir o arquivo.");
		return 1;
	}
	
	fputs("<====================== PRONTUARIO ======================>\n\n", arq);
	
	char nome[50]; int idade = 0; int peso = 0; float altura = 0.0;
	puts("<====================== PRONTUARIO ======================>");
	
	for(int i=0; i<5; i++){
		printf("\n\nDigite seu nome: ");
		gets(nome); 
		
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		
		printf("Digite seu peso: ");
		scanf("%d", &peso);
		
		printf("Digite sua altura: ");
		scanf("%f", &altura);
		
		for(int x = 0; nome[x] != '\0'; x++)
			fprintf(arq,"%c", nome[x]);
		
		fprintf(arq, " tem %d anos e um IMC de %.2f ", idade, peso/(altura*altura));
		
		if(peso/(altura*altura) < 18.5)
			fputs("considerado abaixo do peso normal.\n\n", arq);	
		else if(peso/(altura*altura) < 24.9)
			fputs("considerado peso normal.\n\n", arq);
		else if(peso/(altura*altura) < 29.9)
			fputs("considerado excesso de peso.\n\n", arq);
		else if(peso/(altura*altura) < 34.9)
			fputs("considerado obesidade classe I.\n\n", arq);
		else if(peso/(altura*altura) < 39.9)
			fputs("considerado obesidade classe II.\n\n", arq);		
		else
			fputs("considerado obesidade classe III.\n\n", arq);
		
		fflush(stdin); // limpa o buffer do teclado
		system("cls");
		
		}
		
	fclose(arq);
	puts("Arquivo modificado com sucesso!");
} // FIM

