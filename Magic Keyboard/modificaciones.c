#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
#include "gotoxy.h"
#include "datos.h"
#include "bajas.h"
//#include "buscar_jugador.h"
#include "modificar_cancion.h"
#include "modificar_nombre_cancion.h"

void modificaciones(){

FILE *archivo;
Persona P;
int band=-1,x=0,y,op;
char ap[50],am[50],nom[50];



if( (archivo = fopen("Datos.dat","rb")) == NULL){
    printf("Error al abrir el archivo\n");
    exit(1);
}

system("cls");
cuadrado();
gotoxy(25,8);
printf("Ingrese Apellido Paterno\n");
gotoxy(25,9);
printf("-> ");
scanf("%s",ap);
gotoxy(25,10);
printf("Ingrese Apellido Materno\n");
gotoxy(25,11);
printf("-> ");
scanf("%s",am);
gotoxy(25,12);
printf("Ingrese Nombre\n");
gotoxy(25,13);
printf("-> ");
scanf("%s",nom);

while( (fread(&P, sizeof(Persona),1, archivo)) >0 ){
if( (strcasecmp(ap, P.n.Ap) == 0) && (strcasecmp(am, P.n.Am) == 0) && (strcasecmp(nom, P.n.Nom) == 0) && ( P.numcanciones > 0))
    {
    band=x;
     //   guardar(P,band);
    system("cls");
    cuadrado();
    gotoxy(36,8);
    printf("Modificaciones\n");
    gotoxy(25,9);
    printf("1.-Nombre de una Cancion\n");
    gotoxy(25,10);
    printf("2.-Cancion \n");
    gotoxy(25,11);
    printf("3.-Salir\n");
    gotoxy(25,12);
    printf("[ ]\b\b");
    scanf("%d",&op);
    switch(op){

     case 1:  modificar_nombre_cancion(P,x);
              break;

     case 2: modificar_cancion(P,x);
             break;

     case 3: break;
     default: system("cls");
              gotoxy(30,10);
              printf("Ingrese un valor correcto\n");
              gets(stdin);
              }
        break;
    }
    x++;}

//fseek(archivo,sizeof(Persona)*(band),SEEK_SET);

if(band == -1){
    system("cls");
    gotoxy(1,1);
    printf("No se encontro al jugador o no tienes ninguna cancion grabada\n");
    }

getch();
fclose(archivo);
}





