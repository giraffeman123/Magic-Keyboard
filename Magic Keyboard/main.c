#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
#include "consulta_general.h"
#include "gotoxy.h"
#include "datos.h"
#include "cuadrado.h"
#include "registro.h"
#include "consulta_nombre.h"
#include "teclado.h"
#include "jugar_teclado.h"
#include "grabar_cancion.h"
#include "bajas.h"
#include "modificaciones.h"

int main()
{
    int op,op1;
  /*  for(i=0;i<256;i++){
        printf("%d.-   %c\n", i, (char)i);
    }*/
   system("Color 4F");
    do{

       system("cls");
       cuadrado();
        gotoxy(25,3);
       printf("</-------____________-----/>\n");
       gotoxy(25,5);
       printf("</------- _M_E_N_U_  -----/>\n");
          gotoxy(25,7);
       printf("</-------____________-----/>\n");
       gotoxy(32,9);
       printf("1.-Registro\n");
       gotoxy(32,11);
       printf("2.-Consultas \n");
       gotoxy(32,13);
       printf("3.-Teclado\n");
       gotoxy(32,15);
       printf("4.-Grabar Cancion\n");
       gotoxy(32,17);
       printf("5.-Bajas\n");
       gotoxy(32,19);
       printf("6.-Modificaciones\n");
       gotoxy(32,21);
       printf("7.-Salir\n");
       gotoxy(32,23);
       printf("[ ]\b\b");
       scanf("%d",&op);
       switch(op){

        case 1: registro();
                break;

        case 2: do{
                 system("cls");
                 cuadrado();
                 gotoxy(23,4);
       printf("</-----___________________-----/>\n");
       gotoxy(23,6);
       printf("</-----_C_O_N_S_U_L_T_A_S_-----/>\n");
       gotoxy(23,8);
       printf("</-----___________________-----/>\n");
                 gotoxy(32,10);
                 printf("1.-Consulta General\n");
                 gotoxy(32,12);
                 printf("2.-Consulta por Nombre\n");
                 gotoxy(32,14);
                 printf("3.-Salir\n");
                 gotoxy(32,16);
                 printf("[ ]\b\b");
                 scanf("%d",&op1);
                 switch(op1){

                  case 1: consulta_general();
                          break;

                  case 2: consulta_nombre();
                          break;

                  case 3: break;
                  default: system("cls");
                           gotoxy(30,10);
                           printf("Ingrese un valor correcto\n");
                           gets(stdin);
                           }
                  }while(op1!=3);

                break;

        case 3: jugar_teclado();
                break;

        case 4: grabar_cancion();
                break;

        case 5: bajas();
                break;

        case 6: modificaciones();
                break;

        case 7: break;
        default: system("cls");
                 gotoxy(30,10);
                 printf("Ingrese un valor correcto\n");
                 gets(stdin);
                 }
       }while(op!=7);

    getch();
    return 0;
}

