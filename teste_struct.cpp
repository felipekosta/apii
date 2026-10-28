#include <stdio.h>
#include <string.h>

#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define scan(msg, mascara, var) { printf(msg); scanf(mascara, &var); }

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	struct aluno { 
	   char nome[50]; 
	   float nota1, nota2; 
	};
	struct aluno a;
	strcpy(a.nome, "Maria");
	a.nota1 = 8.5;
	a.nota2 = 7.0;
	float media = (a.nota1 + a.nota2) / 2;
	struct aluno *pa = &a;
	//pa = &a;
	printf("Nome=%s\n", pa->nome);
	//printf("Nome=%s\n", (*pa).nome);

	

	return 0;
}



