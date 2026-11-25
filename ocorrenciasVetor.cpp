/*
	Name: ocorrenciasVetor.cpp
	Author: Rosa Marcella
	Date: 25/11/26 10:06
	Description: Programa para manipular um vetor. • Contagem de ocorrências: Escreva uma função que receba um vetor, seu tamanho e um número x, retornando quantas vezes x aparece no vetor
*/

# include <stdio.h>

int encontrarNumero(int*, int, int);


main()
{
	int qtde = 0; int i;
	printf("Qual a quantidade de elementos que sera armazenada no vetor? ");
	scanf("%d", &qtde);
	
	int vet[qtde]; int num = 0;
	
	if(qtde > 0){
		
		printf("\nDigite %d de elementos:\n", qtde);
		for(i=0;i<qtde;i++)
			scanf("%d", &vet[i]);
		puts("Digite o numero que deseja buscar no vetor: ");
		scanf("%d", &num);
	}
	
	printf("\nO numero %d aparece no vetor %d vezes.",num, encontrarNumero(vet, qtde, num));	
	puts("\n\nFIM");
}

int encontrarNumero(int *V, int N, int X)
{
	int ocorrencias = 0;
	for(int i=0; i<N; i++)
		if(V[i] == X)
			ocorrencias = ocorrencias + 1;
	return ocorrencias;
}

int encontrarMenor(int *V, int N)
{
	int menor = V[0];
	for(int i=0; i<N; i++)
		if(V[i] < menor)
			menor = V[i];
	return menor;
}
