#include <stdio.h>
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
float sumarEncimaDiag(int c, int f, float mat[][f]){
    if(c!=f)
       return -1;

    int i, j;
    float suma=0;

    for(i=0; i<c; i++){

        for(j=i+1;j<f;j++){
            suma+= mat[i][j];
        }
    }

    return suma;



}
float sumEncimaydiag(int c, int f, float mat[][f]){
    if(c!=f)
       return -1;

    int i, j;
    float suma=0;

    for(i=0; i<c; i++){

        for(j=i;j<f;j++){
            suma+= mat[i][j];
        }
    }

    return suma;

}

float sumarDebajodiag (int c, int f, float mat[][f]){
    if(c!= f)
        return -1;

    int i, j;
    float suma=0;

    for(i=1; i<c; i++){
        for(j=0; j<i;j++){
            suma += mat[i][j];
        }
    }

    return suma;


}
float sumarDebajoyDiag(int c, int f, float mat[][f]){
    if(c!= f)
        return -1;

    int i, j;
    float suma=0;

    for(i=0; i<c; i++){
        for(j=0; j<i+1;j++){
            suma += mat[i][j];
        }
    }

    return suma;
}

float sumEncimaDiagSec(int c, int f , float mat[][f]){
    if(c!=f)
        return -1;

    int i, j;
    float suma=0;

    for(i=0; i<c;i++){
        for(j=0; j<f-1-i; j++){
            suma+= mat[i][j];
        }
    }

    return suma;
}

float sumEncimayDiagSec(int c, int f, float mat[][f]){

    if(c!=f)
        return -1;

    int i, j;
    float suma=0;

    for(i=0; i<c;i++){
        for(j=0; j<f-i; j++){
            suma+= mat[i][j];
        }
    }
    return suma;
}

float sumDebajoDiagSec(int c, int f, float mat[][f]){
    if(c!=f)
        return -1;

    int i, j;
    float suma=0;

    for(i=1; i<f;i++){
        for(j=f-i; j<c;j++){
            suma+= mat[i][j];
        }
    }

    return suma;


}

float sumDebajoyDiagSec(int c, int f, float mat[][f]){
    if(c!=f)
        return -1;

    int i, j;
    float suma=0;
    for(i=0; i<f;i++){
        for(j=f-i-1; j<c;j++){
            suma+= mat[i][j];
        }
    }

    return suma;

}



//ej 1.13
float sumdiag(int c, int f, float mat[][f]){
    if(c!=f ){
        return -1;
    }
    int i;
    int suma=0;

    for(i=0;i<f;i++){
        suma+= mat[i][i];
    }


    return suma;
}
float sumadiagSec(int c, int f, float mat[][f]){
    if(c!=f){
        return -1;
    }

    int i;
    int j =0;
    float suma=0;

    for(i=f-1; i>=0; i--){
        suma+= mat[j][i];

        j++;


    }

    return suma;


}

// ej 1.14
