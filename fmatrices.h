#ifndef FMATRICES_H_INCLUDED
#define FMATRICES_H_INCLUDED
//otras funciones
void mostrarMat(int c , int f, float mat[][f]);
void mostrarMatEnt(int c , int f, int mat[][f]);

// ejercicio 1.12, son varias.
float sumarEncimaDiag(int c, int f, float mat[][f]);
float sumEncimaydiag(int c, int f, float mat[][f]);
float sumarDebajodiag (int c, int f, float mat[][f]);
float sumarDebajoyDiag(int c, int f, float mat[][f]);
float sumEncimaDiagSec(int c, int f , float mat[][f]);
float sumEncimayDiagSec(int c, int f, float mat[][f]);
float sumDebajoDiagSec(int c, int f, float mat[][f]);
float sumDebajoyDiagSec(int c, int f, float mat[][f]);
//ejercicio 1.13
int sumdiag(int c, int f, int mat[][c]);
int sumadiagSec(int c, int f, int mat[][f]);
//ejercicio 1.14
int esDiagonal(int c, int f, int mat[][f]);
//ejercicio 1.15
int esIdentidad(int c, int f, int mat[][f]);
//ejercicio 1.16
int esSimetrica(int c, int f, int mat[][f]);
// ej 1.17
void trasponerCuad(int c, int f, int mat[][f]);


#endif // FMATRICES_H_INCLUDED
