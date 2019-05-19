#ifndef DATOS_H_INCLUDED
#define DATOS_H_INCLUDED

typedef struct{

   char Ap[50],Am[50],Nom[50];
              }Nombre;

typedef struct{

   char audio[10][100];
   int numcanciones;
   char nombrecancion[10][100];
   Nombre n;
              }Persona;

#endif // DATOS_H_INCLUDED
