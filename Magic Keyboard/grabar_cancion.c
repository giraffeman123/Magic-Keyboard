#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
#include "gotoxy.h"
#include "datos.h"
#include "cuadrado.h"
#include "teclado.h"
#include "buscar_jugador.h"
#include "guardar.h"

void grabar_cancion(){

FILE *archivo;
Persona P;
int band=-1,x=0,y;
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
if( (strcasecmp(ap, P.n.Ap) == 0) && (strcasecmp(am, P.n.Am) == 0) && (strcasecmp(nom, P.n.Nom) == 0))
    {
        band=x;
        guardar(P,band);
        break;
    }
    x++;}

//fseek(archivo,sizeof(Persona)*(band),SEEK_SET);

if(band == -1){
    system("cls");
    gotoxy(1,1);
    printf("No se encontro al jugador\n");
    getch();
    fclose(archivo);
    }

fclose(archivo);
}
