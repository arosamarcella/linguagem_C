/*
	Name: buscarValorMatriz.cpp
	Author: Rosa Marcella
	Date: 25/11/26 10:06
	Description: Programa para manipular uma matriz. 
	Busca na matriz: Implemente uma função buscarValor que procure um número inteiro em uma matriz 3x3 e informe se ele existe ou não.
*/

# include <stdio.h>
void buscarValor(int[2][2], int, int);

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
			
	puts("Digite o numero que deseja buscar na matriz: ");
		scanf("%d", &num);
	}
	puts("\n\n");
	
	
	puts("\n\nFIM");
}

void buscarValor(int M[2][2], int N, int X)
{
	int ocorrencias = 0;
	for(int i = 0; i<N; i++)
		for(int j = 0; j<N; j++)						
			if(M[i][j] == X)
				ocorrencias;	

	printf("\nO numero %d aparece no vetor %d vezes.",X, ocorrencias);
}
