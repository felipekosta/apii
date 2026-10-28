#include <stdio.h>

int main1() {

    int hp = 100;
    int *ptr_hp = &hp;
    printf("hp=%d ptr_hp=%d\n", hp, *ptr_hp);
    hp = 75;
    printf("hp=%d ptr_hp=%d\n", hp, *ptr_hp);
    *ptr_hp = *ptr_hp - 20;
    printf("hp=%d ptr_hp=%d\n", hp, *ptr_hp);
    // Por que motivo a alteração feita através 
    // de *ptr_hp reflete instantaneamente no valor de hp?
    // Ambas apontam para a mesma área de memória
    return 0;
}