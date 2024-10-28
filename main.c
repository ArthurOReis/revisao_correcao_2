#include <stdio.h>
#include <string.h>

int expressao(int valor1, int valor2, int operacao) {
    switch (operacao) {
        case 1:
            return valor1 && valor2;
        case 2:
            return !(valor1 && valor2);
        case 3:
            return valor1 || valor2;
        case 4:
            return !(valor1 || valor2);
        case 5:
            return valor1 ^ valor2;
        case 6:
            return !(valor1 ^ valor2);
        default:
            return -1;
    }
}

int main() {
    char valorChar1[10], operacaoChar[10], valorChar2[10];
    int valor1 = 0, valor2 = 0, operacao = -1;

    printf("Expressão: ");
    scanf("%s", valorChar1);
    scanf("%s", operacaoChar);
    scanf("%s", valorChar2);


    if (strcmp(valorChar1, "VERDADEIRO") == 0) {
        valor1 = 1;
    } else if (strcmp(valorChar1, "FALSO") == 0) {
        valor1 = 0;
    }

    if (strcmp(valorChar2, "VERDADEIRO") == 0) {
        valor2 = 1;
    } else if (strcmp(valorChar2, "FALSO") == 0) {
        valor2 = 0;
    }

    if (strcmp(operacaoChar, "AND") == 0) {
        operacao = 1;
    } else if (strcmp(operacaoChar, "NAND") == 0) {
        operacao = 2;
    } else if (strcmp(operacaoChar, "OR") == 0) {
        operacao = 3;
    } else if (strcmp(operacaoChar, "NOR") == 0) {
        operacao = 4;
    } else if (strcmp(operacaoChar, "XOR") == 0) {
        operacao = 5;
    } else if (strcmp(operacaoChar, "XNOR") == 0) {
        operacao = 6;
    }

    int resultado = expressao(valor1, valor2, operacao);

    printf("Resultado: ");
    if (resultado == 1) {
        puts("VERDADEIRO");
    } else if (resultado == 0) {
        puts("FALSO");
    } else {
        puts("OPERAÇÃO INVÁLIDA");
    }

    return 0;
}
