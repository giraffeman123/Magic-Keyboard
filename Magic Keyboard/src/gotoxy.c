#include "gotoxy.h"
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>

void gotoxy (int x,int y){

    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(hcon,pos);
}
