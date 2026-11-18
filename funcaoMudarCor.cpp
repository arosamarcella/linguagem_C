/*
	Name: funcaoMudarCor.cpp
	Author: Rosa Marcella
	Date: 11/11/26 09:53
	Description: 
*/

# include <windows.h> // Biblioteca para utilizar Beep() e Sleep()
# include <stdio.h>
# include <conio.h>

void mudarCor(int cor){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,cor);
}

main(){
	int cor;
	while(1){
		cor = getch();
		mudarCor(cor); // Vermelho claro
		printf("Texto em vermelho no Windows!\n");
		
		mudarCor(7); // Retoma a cor padrao (branco)
		printf("Texto normal.\n");
	}
}
