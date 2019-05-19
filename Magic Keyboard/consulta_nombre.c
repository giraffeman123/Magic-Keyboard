#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
#include "gotoxy.h"
#include "datos.h"
#include "cuadrado.h"
#include "buscar_registro.h"

void consulta_nombre(){

FILE *archivo;
Persona P;
int x=1,band=-1,y;
char ap[50],am[50],nom[50];

if( (archivo = fopen("Datos.dat","rb")) == NULL ){
    printf("Error al abrir el archivo\n");
    exit(1);
}

band = -1;
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

system("cls");

while( fread(&P, sizeof(Persona),1, archivo) >0 ){
if( (strcasecmp(ap, P.n.Ap) == 0) && (strcasecmp(am, P.n.Am) == 0) && (strcasecmp(nom, P.n.Nom) == 0))
    {
        imprimir(P,x);
        band=x;
        break;
    }
    x++;}



if(band==-1){
    gotoxy(1,1);
    printf("No se encontro el usuario deseado\n");
    }

fclose(archivo);
getch();
}
