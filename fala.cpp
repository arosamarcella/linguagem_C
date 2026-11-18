
#include <windows.h>
#include <stdio.h>

int main() {

    printf("TESTE DE SOM!\n");

    Beep(500, 500);
    Sleep(200);

    Beep(700, 500);
    Sleep(200);

    Beep(1000, 500);
    Sleep(200);

    Beep(1500, 500);
    Sleep(200);

    Beep(2000, 500);

    return 0;
}

