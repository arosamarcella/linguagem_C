/*
	Name: Exercicio2P2.cpp
	Author: Rosa Marcella
	Date: 25/11/26 10:06
	Description: Programa para manipular uma matriz
*/

# include <stdio.h>

main()
{ 
	int matA[2][2], matB[2][2], matS[2][2];
	int i = 0; int j = 0; int ordem = 2;
	
	puts("Digite 4 elementos inteiros para carregar a matriz A: ");
	for(i = 0; i<ordem; i++)
		for(j = 0; j<ordem; j++)						
			scanf("%d", &matA[i][j]);
	puts("\n\n");
			
	puts("Digite 4 elementos inteiros para carregar a matriz B: ");
	for(i = 0; i<ordem; i++)
		for(j = 0; j<ordem; j++)			
			scanf("%d", &matB[i][j]);
	puts("\n\n");	
		
			
	puts("Conteudo da matriz A: ");
	for(i = 0; i<ordem; i++)
	{
		puts(" ");
		for(j = 0; j<ordem; j++)						
			printf("%d\t", matA[i][j]);
	}
	puts("\n\n");
	
	
	puts("Conteudo da matriz B: ");
	for(i = 0; i<ordem; i++)
	{
		puts(" ");
		for(j = 0; j<ordem; j++)						
			printf("%d\t", matB[i][j]);
	}
	puts("\n\n");
	
	// Fazendo a matriz SOMA
	for(i = 0; i<ordem; i++)
		for(j = 0; j<ordem; j++)			
			matS[i][j] = matA[i][j] + matB[i][j];
	puts("\n\n");
	
	puts("Conteudo da matriz SOMA: ");
	for(i = 0; i<ordem; i++)
	{
		puts(" ");
		for(j = 0; j<ordem; j++)						
			printf("%d\t", matS[i][j]);
	}
	puts("\n\n");
	
	
	puts("Conteudo inverso da matriz SOMA"); // ---------
	for(i = ordem - 1; i>=0; i--)
	{
		puts(" ");
		for(j = ordem - 1; j>=0; j--)						
			printf("%d\t", matS[i][j]);
	}
	puts("\n\n");
		
	
	// Fazendo a matriz SOMA ZERO e UM
	for(i = 0; i<ordem; i++)
		for(j = 0; j<ordem; j++){
			if(matS[i][j] % 2 == 1 || matS[i][j] == 1)
				matS[i][j] = 0;
			else
				matS[i][j] = 1;
		}			
	
	puts("Conteudo Zeros e Uns da matriz SOMA: "); // ---------		
		for(i = 0; i<ordem; i++)
	{
		puts(" ");
		for(j = 0; j<ordem; j++)						
			printf("%d\t", matS[i][j]);
	}
	puts("\n\n");
	
	
	puts("\n\nFIM");
}
