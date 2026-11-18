/*
	Name: PerfumariaLerDados.cpp
	Author: Rosa Marcella
	Date: 11/11/26 09:53
	Description: Programa para receber nome, idade e altura alternado as cores. Ao final da entrada de cada dado, 
	emitir um som de entrada e exibir ao final todos os dados com uma cor diferente da entrada e emitir outro som
*/

# include <windows.h> // Biblioteca para utilizar Beep() e Sleep()
# include <stdio.h>
# include <conio.h>


main(){
	char nome[10]; 
	int idade = 0; 
	float altura = 0.0;
	
	printf("\033[31m\nDigite seu nome: \n");
	gets(nome);
	Beep(3600, 150);
	
	printf("\033[1;32mDigite sua idade: \n");
	scanf("%d", &idade);
	Beep(3600, 150);
	
	printf("\033[35mDigite sua altura: \n");
	scanf("%f", &altura);
	Beep(3600, 150);
	
	puts("\n\n\n");
	
	for(int cont = 0; cont < 40; cont++){
		printf("\033[35m%c", nome[cont]);
	}
	
	printf("\033[1;32m\n%d\n", idade);
	
	printf("\033[31m%.2f\n", altura);

	// Definindo as frequências das notas (em Hz)
	#define E5  659
	#define C5  523
	#define G5  784
	#define G4  392

    Beep(E5, 150);
    Sleep(50);     // Pequena pausa entre as notas (em ms)
    Beep(E5, 150);
    Sleep(150);
    Beep(E5, 150);
    Sleep(150);
    Beep(C5, 150);
    Beep(E5, 150);
    Sleep(150);
    Beep(G5, 300);
    Sleep(300);
    Beep(G4, 300);
}

