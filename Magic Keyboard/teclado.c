#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
#include "gotoxy.h"
#include "datos.h"

void teclado(){

int x,y,a=10,cont=0;

         for(y=0;y<20;y++){
            gotoxy(1,y+4);
            printf("*");
         }
         for(x=1;x<72;x++){
            gotoxy(x,y+4);
            printf("*");
         }
         for(y=20;y>0;y--){
            gotoxy(72,y+4);
            printf("*");
         }
         for(x=72;x>1;x--){
            gotoxy(x,y+4);
            printf("*");
         }
         gotoxy(11,y);
         x = 11;
         while(x<70){
         if(cont == 2){
            for(y=24;y>4;y--){
            gotoxy(x,y);
            printf("*");
         }}
         else{
            for(y=24;y>13;y--){
            gotoxy(x,y);
            printf("*");
         }}
         x += a;
         cont++;
         }
        for(y=4;y<14;y++){
            gotoxy(7,y);
            printf("*");
        }
        for(x=7;x<15;x++){
            gotoxy(x,y);
            printf("*");
        }
        for(y=14;y>4;y--){
            gotoxy(15,y);
            printf("*");
        }
        for(x=15;x<23;x++){
            gotoxy(x,14);
            printf("*");
        }
        for(y=14;y>4;y--){
            gotoxy(23,y);
            printf("*");
        }


        for(y=4;y<14;y++){
            gotoxy(39,y);
            printf("*");
        }
        for(x=39;x<47;x++){
            gotoxy(x,y);
            printf("*");
        }
        for(y=14;y>4;y--){
            gotoxy(47,y);
            printf("*");
        }
        for(x=47;x<55;x++){
            gotoxy(x,14);
            printf("*");
        }
        for(y=14;y>4;y--){
            gotoxy(55,y);
            printf("*");
        }
         for(x=55;x<63;x++){
            gotoxy(x,14);
            printf("*");
        }
        for(y=14;y>4;y--){
            gotoxy(63,y);
            printf("*");
        }
}
