#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
#include "gotoxy.h"
#include "datos.h"
#include "cuadrado.h"
#include "teclado.h"
#include "buscar_jugador.h"

void modificar_nombre_cancion(Persona P,int band){

FILE *archivo;
int y,auxi;

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
printf("Escriba nuevo nombre\n");
scanf("%s", P.nombrecancion[auxi]);

fwrite(&P,sizeof(Persona),1,archivo);
fclose(archivo);

}
