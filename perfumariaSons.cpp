/*
	Name: perfumariaSons.cpp
	Author: Rosa Marcella
	Date: 11/11/26 09:53
	Description: Programa para emitir sons necessários para chamar a atenção do usuário
*/

# include <windows.h> // Biblioteca para utilizar Beep() e Sleep()
# include <stdio.h>

main(){
	int freq, tempo;
	int cont;
	freq = 3200;
	tempo = 150;
	
	for(cont = 0; cont < 10; cont++){
		Beep(freq, tempo);
		freq = freq - 00;
	}
	
}





