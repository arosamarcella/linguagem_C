/*
	Name: encontrarMaior.cpp
	Author: Rosa Marcella
	Date: 25/11/26 10:06
	Description: Programa para manipular uma matriz. 
	Maior elemento e posição: Faça uma função que receba uma matriz 4x4 e retorne o maior valor encontrado nela.
*/

# include <stdio.h>
int encontrarMaior(int[2][2], int);

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
	
	printf("Maior valor eh: %d", encontrarMaior(mat, ordem));	
	
	
	
	
	puts("\n\nFIM");
}

int encontrarMaior(int M[2][2], int N)
{
	int maior = M[0][0];
	for(int i = 0; i<N; i++)
		for(int j = 0; j<N; j++)						
			if(M[i][j] > maior)
				maior = M[i][j];
	
	return maior;
}
