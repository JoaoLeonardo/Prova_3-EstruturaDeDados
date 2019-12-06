#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    int vet2[8] = {8, 8, 8, 5, 4, 3, 1, 1};

    printf("busca descrescente: %d\n\n", buscaBinariaDecrescente(vet, 0, 8, 8));
    printf("busca descrescente II: %d\n\n", buscaBinariaDecrescente_2(vet2, 0, 8, 1));
}

int buscaBinariaDecrescente(int vet[], int ini, int ult, int chv) {

    if(ini > ult) {
        return -1;
    }

    int meio = (ini + ult)/2;

    if(vet[meio] == chv) {
        return meio;
    } else if(vet[meio] < chv) {
        buscaBinariaDecrescente(vet, ini, meio-1, chv);
    } else {
        buscaBinariaDecrescente(vet, meio+1, ult, chv);
    }
}

int buscaBinariaDecrescente_2(int vet[], int ini, int ult, int chv) {

    if(ini > ult) {
        return -1;
    }

    int meio = (ini + ult)/2;

    if(vet[meio] == chv) {
        while(vet[meio + 1] == chv) {
            meio++;
        }
        return meio;
    } else if(vet[meio] < chv) {
        buscaBinariaDecrescente_2(vet, ini, meio-1, chv);
    } else {
        buscaBinariaDecrescente_2(vet, meio+1, ult, chv);
    }
}
