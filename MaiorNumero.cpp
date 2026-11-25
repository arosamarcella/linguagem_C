/*
	Name: MaiorNumero.cpp
	Author: Rosa Marcella
	Date: 25/11/26 10:06
	Description: Programa para manipular um vetor. • Maior e menor: Faça uma função que encontre o maior elemento de um vetor de inteiros e outra que encontre o menor.
*/

# include <stdio.h>

int encontrarMaior(int*, int);
int encontrarMenor(int*, int);

main()
{
	int qtde = 0; int i;
	printf("Qual a quantidade de elementos que sera armazenada no vetor? ");
	scanf("%d", &qtde);
	
	int vet[qtde];
	
	if(qtde > 0){
		
		printf("\nDigite %d de elementos:\n", qtde);
		for(i=0;i<qtde;i++)
		scanf("%d", &vet[i]);
	}
	
	printf("\nMaior: %d",encontrarMaior(vet, qtde));	
	printf("\nMenor: %d",encontrarMenor(vet, qtde));
	puts("\n\nFIM");
}

int encontrarMaior(int *V, int N)
{
	int maior = V[0];
	for(int i=0; i<N; i++)
		if(V[i] > maior)
			maior = V[i];
	return maior;
}

int encontrarMenor(int *V, int N)
{
	int menor = V[0];
	for(int i=0; i<N; i++)
		if(V[i] < menor)
			menor = V[i];
	return menor;
}
