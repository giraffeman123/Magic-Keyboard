#include "consulta_general.h"
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
#include "gotoxy.h"
#include "datos.h"
void consulta_general(Persona p[100],int numper){

int x,a=4,b=0,c=0;

system("cls");
gotoxy(1,1);
printf("Consultas\n");
for(x=0;x<numper;x++){
    gotoxy(1,c+3);
    printf("---------------------------------------\n");
    gotoxy(1,c+4);
    printf("Numero Registro: %d\n",p[x].codigoregistro);
    gotoxy(1,c+5);
    printf("%s \t %s \t %s\n",p[x].n.Ap, p[x].n.Am, p[x].n.Nom);
    gotoxy(1,c+6);
    printf("---------------------------------------\n");
    b++;
    c = b*a;
}


}
