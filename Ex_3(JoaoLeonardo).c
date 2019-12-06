#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Insira o numero: ");
    scanf("%d", &num);

    printf("Soma dos digitos: %d", somaDigitos(num, 0));

}

int somaDigitos(int num, int soma) {
    if(num != 0) {
        soma = num % 10 + soma;
        soma = somaDigitos(num / 10, soma);
    }
    return soma;
}


