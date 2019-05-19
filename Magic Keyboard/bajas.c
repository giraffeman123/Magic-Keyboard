#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
#include "gotoxy.h"
#include "datos.h"
#include "bajas.h"
#include "buscar_jugador.h"

void bajas(){

FILE *s,*r;
Persona P;
int band=0;
char ap[50],am[50],nom[50];

//pos = buscar_jugador(p,*numper);
if( (r = fopen("Datos.dat","rb")) == NULL){
    printf("Error al abrir el archivo\n");
    exit(1);
}

else{
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

s = fopen("Temp.dat","wb");

while( (fread(&P, sizeof(Persona),1, r)) > 0){
if( (strcasecmp(ap, P.n.Ap) == 0) && (strcasecmp(am, P.n.Am) == 0) && (strcasecmp(nom, P.n.Nom) == 0))
    {
        band=1;
    }
else{
    fwrite(&P,sizeof(Persona),1,s);
    }  }

fclose(s);
                              }

fclose(r);

if(band == 1){
    remove("Datos.dat");
    system("rename Temp.dat Datos.dat");
    system("cls");
    printf("Listo!\n");
    getch();
}
else{
    system("cls");
    printf("No se encontro al usuario");
    getch();}


}



