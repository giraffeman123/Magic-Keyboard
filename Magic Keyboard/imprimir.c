#include "consulta_general.h"
#include "gotoxy.h"
#include "datos.h"
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

void imprimir(Persona P,int x){

int y;

printf("---------------------------------------\n");
    printf("Usuario No. %d\n",x);
    printf("%s \t %s \t %s\n\n",P.n.Ap, P.n.Am, P.n.Nom);
    for(y=0;y< P.numcanciones;y++){
    printf("No. %d\n",y+1);
    printf("Nombre de Cancion: %s\n", P.nombrecancion[y]);
    printf("Audio Grabados: %s\n", P.audio[y]);
                                  }
    printf("---------------------------------------\n");

}

