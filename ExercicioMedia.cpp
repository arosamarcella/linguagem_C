/*
	Name: ExercicioMedia.cpp
	Author: Rosa Marcella
	Date: 25/11/26 10:06
	Description: Programa para manipular um vetor. Crie uma função que receba um vetor de float e seu tamanho n, e retorne a média dos valores.
*/

# include <stdio.h>

float calcularMedia(float*, int);

main()
{
	int qtde = 0; int i;
	printf("Qual a quantidade de elementos que sera armazenada no vetor? ");
	scanf("%d", &qtde);
	
	float vet[qtde];
	
	if(qtde > 0){
		
		printf("\nDigite %d de elementos:\n", qtde);
		for(i=0;i<qtde;i++)
		scanf("%f", &vet[i]);
	}
	
	puts("Media: ");
	printf("A media eh: %.2f",calcularMedia(vet, qtde));	
	puts("\n\nFIM");
}

float calcularMedia(float *V, int N)
{
	float media = 0.0;
	for(int i=0; i<N; i++)
		media = media + V[i];
	media = media / N;
	return media;
}
