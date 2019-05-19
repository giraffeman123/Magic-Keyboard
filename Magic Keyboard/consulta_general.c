#include "consulta_general.h"
#include "gotoxy.h"
#include "datos.h"
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include "imprimir.h"

void consulta_general(){

FILE *archivo;
Persona P;
int x=1,y;

if( (archivo = fopen("Datos.dat","rb")) == NULL){
    printf("Error al abrir el archivo\n");
    exit(1);
}

system("cls");
printf("Consultas\n");

while( fread(&P,sizeof(Persona),1,archivo) >0){
   imprimir(P,x);
      x++;                }

fclose(archivo);
getch();
}
