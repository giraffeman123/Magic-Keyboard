#include "cuadrado.h"
#include "gotoxy.h"
#include<stdio.h>

void cuadrado(){

int x,y;
         for(y=0;y<20;y++){
            gotoxy(22,y+4);
            printf("*");
         }
         for(x=22;x<57;x++){
            gotoxy(x,y+4);
            printf("*");
         }
         for(y=20;y>0;y--){
            gotoxy(57,y+4);
            printf("*");
         }
         for(x=57;x>22;x--){
            gotoxy(x,y+4);
            printf("*");
         }
}

