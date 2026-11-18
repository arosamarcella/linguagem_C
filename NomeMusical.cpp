/*
	Name: NomeMusical.cpp
	Author: Rosa Marcella
	Date: 11/11/26 09:53
	Description: Programa para armazenar um nome e tocar o som equivalente
*/

# include <windows.h> // Biblioteca para utilizar Beep() e Sleep()
# include <stdio.h>
# include <conio.h>

main(){
	char nome[40];
	int i;
	printf("Digite seu nome: ");
	gets(nome);
	
	puts("Conteudo do vetor: ");
	
	while(1){
		for(i = 0; nome[i] != '\0'; i++){
		printf("%c|", nome[i]);
		Beep(nome[i]*3, 200);
	}
		
	}
	
}
