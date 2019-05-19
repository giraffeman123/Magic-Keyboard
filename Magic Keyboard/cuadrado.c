#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include "gotoxy.h"

void cuadrado(){

int x,y;
         for(y=-2;y<20;y++){
            gotoxy(22,y+4);
            printf("*");
         }
         for(x=22;x<58;x++){
            gotoxy(x,y+4);
            printf("*");
         }
         for(y=22;y>0;y--){
            gotoxy(57,y+2);
            printf("*");
         }
         for(x=57;x>22;x--){
            gotoxy(x,y+2);
            printf("*");
         }
}
