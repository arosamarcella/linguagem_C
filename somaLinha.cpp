/*
	Name: somaLinha.cpp
	Author: Rosa Marcella
	Date: 25/11/26 10:06
	Description: Programa para manipular uma matriz. • Soma de uma linha: Escreva uma função somaLinha que receba uma matriz 4x4 e o índice de uma linha, retornando a soma dos elementos dessa linha.

*/

# include <stdio.h>
int somaLinha(int[2][2], int, int);

main()
{ 
	int mat[2][2]; int num = 0;
	int i = 0; int j = 0; int ordem = 2;
	
	puts("Digite 4 elementos inteiros para carregar a matriz: ");
	for(i = 0; i<ordem; i++)
		for(j = 0; j<ordem; j++)						
			scanf("%d", &mat[i][j]);
	puts("\n\n");
		
	puts("Conteudo da matriz: ");
	for(i = 0; i<ordem; i++)
	{
		puts(" ");
		for(j = 0; j<ordem; j++)						
			printf("%d\t", mat[i][j]);
	}
	puts("\n\n");
	
	puts("Digite o numero de uma linha para somar os elementos: ");
	scanf("%d", &num);
	
	printf("A soma dos elementos da linha %d eh: %d",num, somaLinha(mat, ordem, num));	
	
	
	
	
	puts("\n\nFIM");
}

int somaLinha(int M[2][2], int N, int L)
{
	int i = L; int j = 0; int soma = 0;
		for(j = 0; j<N; j++)						
			soma = soma + M[i][j];
	
	return soma;
}
