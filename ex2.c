#include <stdio.h>

int main2() {

    float saldo = 500.50;
    int *p = (int *)&saldo;
    printf("saldo=%.2f\n", *p);
    // O valor impresso é 500? não
    // Explique por que a leitura 
    // direta dos bits de um float 
    // através de um ponteiro int 
    // gera um número inesperado.
    // O armazenamento do float ocorre com ponto
    // flutuante na arquitetura conforme o padrão IEEE 754.
    // A organização interna dos bits é diferente: inteiro usa
    // complemento de 2.
    return 0;
}