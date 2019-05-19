#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
#include "gotoxy.h"
#include "datos.h"
#include "cuadrado.h"
#include "buscar_jugador.h"

int buscar_registro(char ap[50],char am[50],char nom[50],Persona P){

FILE *archivo;
int x,band=-1;

if((archivo = fopen("Datos.dat","rb")) == NULL){
    printf("Error al abrir el archivo para leerlo\n");
    exit(1);
}

else{

while( (fread(&P, sizeof(Persona),1, archivo)) >0 ){
if( (strcasecmp(ap, P.n.Ap) == 0) && (strcasecmp(am, P.n.Am) == 0) && (strcasecmp(nom, P.n.Nom) == 0))
    {
        band=x;
        break;
    }
    x++;}

    }
fclose(archivo);

return band;
}
