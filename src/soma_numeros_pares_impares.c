
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
