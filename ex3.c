#include <stdio.h>

void converteTempo(int total_segundos, int *horas, int *minutos, int *segundos) {
    *horas = total_segundos / 3600;
    total_segundos = total_segundos % 3600;
    *minutos = total_segundos / 60;
    *segundos = total_segundos % 60;
}

int main() {
    int total_sec = 4023, h, m, s;

    converteTempo(total_sec, &h, &m, &s);
    printf("Hora Atual: %d:%02d:%02d\n", h, m, s);

    return 0;
}