#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
#include "gotoxy.h"
#include "datos.h"
#include "teclado.h"
#include "buscar_jugador.h"

void jugar_teclado(){

char c;

   while(c != 113){
    system("cls");
    gotoxy(0,1);
    printf("Presione 'q' para salir\n");
    teclado();
    gotoxy(1,25);
    scanf("%c",&c);

    if( c == 97){
        gotoxy(6,20);
        printf("*");
        Beep(261,500);}

    if( c == 119){
        gotoxy(11,10);
        printf("*");
        Beep(277,500);}

    if( c == 115){
        gotoxy(16,20);
        printf("*");
        Beep(293,500);}

    if( c == 101){
        gotoxy(19,10);
        printf("*");
        Beep(311,500);}

    if( c == 100){
        gotoxy(26,20);
        printf("*");
        Beep(329,500);}

    if( c == 102){
        gotoxy(36,20);
        printf("*");
        Beep(349,500);}

    if( c == 116){
        gotoxy(43,10);
        printf("*");
        Beep(369,500);}

    if( c == 103){
        gotoxy(46,20);
        printf("*");
        Beep(392,500);}

    if( c == 121){
        gotoxy(51,10);
        printf("*");
        Beep(415,500);}

    if( c == 104){
        gotoxy(56,20);
        printf("*");
        Beep(440,500);}

    if( c == 117){
        gotoxy(59,10);
        printf("*");
        Beep(466,500);}

    if( c == 106){
        gotoxy(66,20);
        printf("*");
        Beep(493,500);}
                  }

}
