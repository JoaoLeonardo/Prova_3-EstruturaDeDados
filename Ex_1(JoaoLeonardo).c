#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int tam = 12;
    int vet[] = {32, 45, 50, 18, 29, 16, 12, 8, 6, 4, 2, 1};

    insertionSort(vet, tam);
    for(i=0; i<tam; i++) {
        printf("%d, ", vet[i]);
    }
    printf("\n\n");
}

void insertionSort(int vet[], int n)
{
    int i, chv, j;

    for (i = 1; i < n; i++) {
        chv = vet[i];
        j = i - 1;

        while (j >= 0 && vet[j] < chv) {
            vet[j + 1] = vet[j];
            j = j - 1;
        }
        vet[j + 1] = chv;
    }
}
