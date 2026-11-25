/*
	Name: Exercicio1P2.cpp
	Author: Rosa Marcella
	Date: 25/11/26 10:06
	Description: Programa para manipular um vetor com a quantidade de elementos escolhidos pelo usuario
*/

# include <stdio.h>

main()
{
	int qtde = 0; int i;
	printf("Qual a quantidade d elementos que sera armazenada no vetor? ");
	scanf("%d", &qtde);
	
	
	if(qtde > 0){
		int vet[qtde];
	
		printf("\nDigite %d de elementos:\n", qtde);
		for(i=0;i<qtde;i++)
		scanf("%d", &vet[i]);
		
		puts("\n\nConteudo do vetor: ");
		for(i=0;i<qtde;i++)
		printf("%d|", vet[i]);

		
		puts("\n\nNumeros PARES: ");
		for(i=0;i<qtde;i++)
			if(vet[i] % 2 == 0)
				printf("%d|", vet[i]);
			
			
		puts("\n\nNumeros MAIORES que 10: ");
		for(i=0;i<qtde;i++)
			if(vet[i] > 10)
				printf("%d|", vet[i]);
				
				
		// 0 1 2 3 
		puts("\n\nNumeros dos INDICES IMPARES: ");
		for(i=0;i<qtde;i++)
			if(i % 2 == 1 || i == 1)
				printf("%d|", vet[i]);
				
				
		puts("\n\nConteudo do vetor AO CONTRARIO: ");
		for(i=qtde-1; i>=0; i--)
				printf("%d|", vet[i]);
	}
	
	
	
	
	puts("\n\nFIM");
}
