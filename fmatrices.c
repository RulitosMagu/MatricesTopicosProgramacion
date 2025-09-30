#include <stdio.h>
#include <stdlib.h>
#include "fmatrices.h"

//otras funciones
void mostrarMat(int c , int f, float mat[][f]){
    int i,j;
    for(i=0; i<c;i++){
        for(j=0;j<f;j++){
            printf("%.1f ", mat[i][j]);
        }
        printf("\n");
    }

}
void mostrarMatEnt(int c , int f, int mat[][f]){
    int i,j;
    for(i=0; i<c;i++){
        for(j=0;j<f;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

}


//ej 1.12
float sumarEncimaDiag(int n, float mat[][n]){

    int i, j;
    float suma=0;

    for(i=0; i<n; i++){
        for(j=i+1;j<n;j++){
            suma+= mat[i][j];
        }
    }

    return suma;



}
float sumEncimaydiag(int n, float mat[][n]){

    int i, j;
    float suma=0;

    for(i=0; i<n; i++){

        for(j=i;j<n;j++){
            suma+= mat[i][j];
        }
    }

    return suma;

}

float sumarDebajodiag (int n, float mat[][n]){

    int i, j;
    float suma=0;

    for(i=1; i<n; i++){
        for(j=0; j<i;j++){
            suma += mat[i][j];
        }
    }

    return suma;


}
float sumarDebajoyDiag(int n, float mat[][n]){

    int i, j;
    float suma=0;

    for(i=0; i<n; i++){
        for(j=0; j<i+1;j++){
            suma += mat[i][j];
        }
    }

    return suma;
}

float sumEncimaDiagSec(int n, float mat[][n]){

    int i, j;
    float suma=0;

    for(i=0; i<n;i++){
        for(j=0; j<n-1-i; j++){
            suma+= mat[i][j];
        }
    }

    return suma;
}

float sumEncimayDiagSec(int n, float mat[][n]){

    int i, j;
    float suma=0;

    for(i=0; i<n;i++){
        for(j=0; j<n-i; j++){
            suma+= mat[i][j];
        }
    }
    return suma;
}

float sumDebajoDiagSec(int n, float mat[][n]){

    int i, j;
    float suma=0;

    for(i=1; i<n;i++){
        for(j=n-i; j<n;j++){
            suma+= mat[i][j];
        }
    }

    return suma;


}

float sumDebajoyDiagSec(int n,float mat[][n]){


    int i, j;
    float suma=0;
    for(i=0; i<n;i++){
        for(j=n-i-1; j<n;j++){
            suma+= mat[i][j];
        }
    }

    return suma;

}



//ej 1.13
int sumdiag(int n, int mat[][n]){
    int i;
    int suma=0;

    for(i=0;i<n;i++){
        suma+= mat[i][i];
    }


    return suma;
}
int sumadiagSec(int n, int mat[][n]){

    int i;
    int j =0;
    int suma=0;

    for(i=n-1; i>=0; i--){
        suma+= mat[j][i];

        j++;


    }

    return suma;


}

// ej 1.14

int esDiagonal(int n, int mat[][n]){
    int i,j;
    //recorre diagonal
    for(i=0;i<n;i++){
        if(mat[i][i] ==0)
            return 0;
    }

    //debajo de la diag
    for(i=1; i<n; i++){
        for(j=0; j<i;j++){
            if(mat[i][j]!=0 )
                return 0;
        }
    }
    //encima diag
    for(i=0; i<n; i++){

        for(j=i+1;j<n;j++){
            if(mat[i][j]!=0)
                return 0;
        }
    }

    return 1;



}

//ejercicio 1.15
int esIdentidad(int n, int mat[][n]){

    int i,j;
    //recorre diagonal
    for(i=0;i<n;i++){
        if(mat[i][i] !=1)
            return 0;
    }

    //debajo de la diag
    for(i=1; i<n; i++){
        for(j=0; j<i;j++){
            if(mat[i][j]!=0 )
                return 0;
        }
    }
    //encima diag
    for(i=0; i<n; i++){

        for(j=i+1;j<n;j++){
            if(mat[i][j]!=0)
                return 0;
        }
    }

    return 1;



}

//ej 1.16
int esSimetrica(int n, int mat[][n]){



    // para que se cumpla la matriz ademas de cuadrada debe ser igual a su matriz espejada osea la transpuesta
    int i, j;
    for(i=1; i<n;i++){
        for(j=0; j<n-1 ; j++){
            if(mat[i][j] != mat[j][i])
                return 0;
        }
    }

    return 1;

}

//ej 1.17
void trasponerCuad(int n, int mat[][n]){

    int i, j, aux;
    for(i=1; i<n;i++){
        for(j=0;j<n-1;j++){
            aux = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = aux;
        }
    }


}
//ej 1.18
void transponerMat(int c, int f, int mat[][f], int matresult[][c]){

    int i, j;
    for(i=0; i<f; i++){
        for(j=0;j<c;j++){
            matresult[i][j]= mat[j][i];
        }
    }

}

//ej 1.19
void multMatriz(int c1, int f1, int mat1[][f1], int c2, int f2, int mat2[][f2], int resultado[c1][f2]){
    if(f1!=c2)
        return;
    int i, j,k;

    for(i=0;i<c1;i++){
        for(j=0;j<f2;j++){
            resultado[i][j] =0;
            for(k=0;k<f1;k++)
                resultado[i][j] += mat1[i][k]* mat2[k][j];
        }
    }


}

//ej 1.20



