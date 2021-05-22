#include <stdio.h>
#include <stdlib.h>

#include "soma_numeros_pares_impares.h"

#define PROGRAM_TITLE " *** SOMA DE NUMEROS NATURAIS ***"

int main(int argc, char *argv[]) {

    int iTotalPar = 0, iTotalImpar = 0, iInicial = 0, iFinal = 0;

    //show title
    printf(PROGRAM_TITLE);
    printf("\n \n");

    //request the range
    printf("Digite o numero inicial: ");
    scanf("%d", &iInicial);

    printf("Digite o numero final:   ");
    scanf("%d", &iFinal);
    printf("\n");

    iTotalImpar = somaNumerosImpares(iInicial, iFinal);
    iTotalPar = somaNumerosPares(iInicial, iFinal);

    printf("Total de numeros impares entre %d e %d = %d \n", iInicial, iFinal, iTotalImpar);
    printf("Total de numeros pares entre   %d e %d = %d \n", iInicial, iFinal, iTotalPar);
    printf("\n");

  system("PAUSE");
  return 0;
}

/*
int somaNumerosPares(int iInicial, int iFinal) {

    int iSomaPar = 0, iContador = 0;
    for(iContador = iInicial; iContador <= iFinal; iContador ++) {

        if(ehPar(iContador)) {
            iSomaPar = iSomaPar + iContador;
        }
    }
    return iSomaPar;
}

int somaNumerosImpares(int iInicial, int iFinal) {

    int iSomaImpar = 0, iContador = 0;
    for(iContador = iInicial; iContador <= iFinal; iContador ++) {

        if(!ehPar(iContador)) {
            iSomaImpar = iSomaImpar + iContador;
        }
    }
    return iSomaImpar;
}

int ehPar(int iNum) {

    return !(iNum % 2);
}
*/
