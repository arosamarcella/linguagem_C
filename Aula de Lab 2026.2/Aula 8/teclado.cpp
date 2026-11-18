/*
	Name: teclado.cpp
	Author: Rosa Marcella
	Date: 11/11/26 09:53
	Description: Programa para simular sons no teclado
*/

# include <windows.h> // Biblioteca para utilizar Beep() e Sleep()
# include <stdio.h>
# include <conio.h>

main(){
	int tecla ;
	
	while(1){
	tecla = getch();
	Beep(tecla*100, 150);
	printf("Tecla: %c - %d\n", tecla, tecla); 
		
		
	}

}
