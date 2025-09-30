#ifndef FMATRICES_H_INCLUDED
#define FMATRICES_H_INCLUDED
//otras funciones
void mostrarMat(int c , int f, float mat[][f]);
void mostrarMatEnt(int c , int f, int mat[][f]);

// ejercicio 1.12, son varias.
float sumarEncimaDiag(int n, float mat[][n]);
float sumEncimaydiag(int n, float mat[][n]);
float sumarDebajodiag (int n, float mat[][n]);
float sumarDebajoyDiag(int n, float mat[][n]);
float sumEncimaDiagSec(int n, float mat[][n]);
float sumEncimayDiagSec(int n, float mat[][n]);
float sumDebajoDiagSec(int n, float mat[][n]);
float sumDebajoyDiagSec(int n, float mat[][n]);
//ejercicio 1.13
int sumdiag(int n, int mat[][n]);
int sumadiagSec(int n, int mat[][n]);
//ejercicio 1.14
int esDiagonal(int n, int mat[][n]);
//ejercicio 1.15
int esIdentidad(int n, int mat[][n]);
//ejercicio 1.16
int esSimetrica(int n, int mat[][n]);
// ej 1.17
void trasponerCuad(int n, int mat[][n]);
//ej 1.18
void transponerMat(int c, int f, int mat[][f], int matres[][c]);
//ej 1.19
void multMatriz(int c1, int f1, int mat1[][f1], int c2, int f2, int mat2[][f2], int resultado[c1][f2]);


#endif // FMATRICES_H_INCLUDED
