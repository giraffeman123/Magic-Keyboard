#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
#include "gotoxy.h"
#include "datos.h"
#include "cuadrado.h"
//#include "buscar_jugador.h"
#include "buscar_registro.h"

void registro(){

FILE *archivo;
Persona P;
int band;
char seguir,ap[50],am[50],nom[50];

do{

if( (archivo = fopen("Datos.dat","ab+")) == NULL){
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

band = buscar_registro(ap,am,nom,P);

if(band == -1){

   strcpy(P.n.Ap, ap);
   strcpy(P.n.Am, am);
   strcpy(P.n.Nom, nom);
   P.numcanciones = 0;
   strcpy(P.audio,"");
   strcpy(P.nombrecancion,"");
   fwrite(&P, sizeof(Persona),1,archivo);
   }

else{
    system("cls");
    cuadrado();
    gotoxy(23,3);
    printf("Ya existe un jugador con ese nombre!\n");
    getch();
     }

gotoxy(25,14);
printf("Ingresar Otro [y/n]?\n");
gotoxy(25,15);
printf("-> ");
gets(stdin);
scanf("%c",&seguir);
if(seguir != 'n'){
    fclose(archivo);
}

    }while(seguir != 'n');

fclose(archivo);
}
