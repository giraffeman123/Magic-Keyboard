#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
#include "gotoxy.h"
#include "datos.h"
#include "cuadrado.h"
#include "teclado.h"
//#include "buscar_jugador.h"
#include "guardar.h"

void modificar_cancion(Persona P,int band){


FILE *archivo;
int n,y,auxi;
char c,aux[10];
aux[1] = '\0';

if( (archivo = fopen("Datos.dat","rb+")) == NULL ){
    printf("Error al abrir el archivo\n");
    exit(1);
}

fseek(archivo,sizeof(Persona)*band,0);

do{
system("cls");
for(y=0;y< P.numcanciones;y++){
 printf("No. %d\n",y);
 printf("Nombre de Cancion: %s\n", P.nombrecancion[y]);
 printf("Audio Grabados: %s\n", P.audio[y]);
                                   }
printf("\n");
printf("Eliga una cancion a editar \n[Por numero]\n");
scanf("%d",&auxi); }while(auxi >= P.numcanciones);
//printf("Escriba nuevo nombre\n");
//scanf("%s", p[ban].nombrecancion[auxi]);
strcpy(P.audio[auxi],"");

while(c != 113){
    system("cls");
    gotoxy(0,1);
    printf("Presione 'q' para salir\n");
    teclado();
   gotoxy(1,25);
    scanf("%c",&c);

    if( c == 97){
        gotoxy(6,20);
        printf("C");
        Beep(261,500);
        strcpy(aux,"C-");
        strcat( P.audio[ auxi ], aux);}


    if( c == 119){
         gotoxy(10,10);
        printf("D b");
         gotoxy(10,8);
        printf("C#");
        Beep(277,500);
        aux[0] = c;
                strcpy(aux,"C# / Db -");

       strcat( P.audio[ auxi ], aux);}

    if( c == 115){
        gotoxy(16,20);
        printf("D");

        Beep(293,500);
                strcpy(aux,"D-");

        strcat( P.audio[ auxi ], aux);}

    if( c == 101){

                gotoxy(18,10);
        printf("E b ");
      gotoxy(18,8);
        printf("D#");
        Beep(311,500);
                strcpy(aux,"D# / Eb -");
        strcat( P.audio[ auxi ], aux);}

    if( c == 100){
        gotoxy(26,20);
        printf("E");
        Beep(329,500);
                strcpy(aux,"E-");
        strcat( P.audio[ auxi ], aux);}

    if( c == 102){
        gotoxy(36,20);
        printf("F");
        Beep(349,500);
                strcpy(aux,"F-");
        strcat( P.audio[ auxi ], aux);}

    if( c == 116){
        gotoxy(41,10);
        printf("F#");
        gotoxy(41,8);
        printf("Gb");
        Beep(369,500);
                strcpy(aux,"F# / Gb -");
        strcat( P.audio[ auxi ], aux);}

    if( c == 103){
        gotoxy(46,20);
        printf("G");
        Beep(392,500);
                strcpy(aux,"G-");
        strcat( P.audio[ auxi ], aux);}

    if( c == 121){
        gotoxy(50,10);
        printf("G#");
        gotoxy(50,8);
        printf("Ab");
        Beep(415,500);
                strcpy(aux,"G# / Ab -");
        strcat( P.audio[ auxi ], aux);}

    if( c == 104){
        gotoxy(56,20);
        printf("A");
        Beep(440,500);
                strcpy(aux,"A-");
        strcat( P.audio[ auxi ], aux);}

    if( c == 117){
            gotoxy(57,10);
        printf("A# \n");
        gotoxy(57,8);
        printf("Bb");
        Beep(466,500);
                strcpy(aux,"A# / Bb -");
        strcat( P.audio[ auxi ], aux);}

    if( c == 106){
        gotoxy(66,20);
        printf("B");
        Beep(493,500);
                strcpy(aux,"B-");
        strcat( P.audio[ auxi ], aux);}
                  }

       fwrite(&P,sizeof(Persona),1,archivo);
       fclose(archivo);

}
