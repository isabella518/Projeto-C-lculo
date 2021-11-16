#include "func.h"
#include <locale.h>

void menuPrincipal(){
    printf("\n\nNOME DA CALCULADORA\n");
    printf("MENU PRINCIPAL: FUNÇÕES DISPONÍVEIS\n");
    printf("1. f(x) = k\n");
    printf("2. f(x) = x^k\n");
    printf("3. f(x) = k^x\n");
    printf("4. f(x) = ln(x)\n");
    printf("5. f(x) = 1/x\n");
    printf("6. f(x) = sen(x)\n");
    printf("7. f(x) = cos(x)\n");
    printf("8. f(x) = tg(x)\n");
    printf("9. Sair\n");
    printf("Qual operação deseja realizar? ");
}

void subMenu(){
    printf("\nSUBMENU\n");
    printf("1. Calcular a aplicação de um valor na função f(x)\n");
    printf("2. Calcular a aplicação de um valor na derivada f'(x)\n");
    printf("3. Calcular a integral definida I(a,b)\n");
    printf("4. Voltar ao menu anterior\n");
    printf("Escolha uma opção: ");
}

void opcaoInvalida(){
    printf("Opção inválida!\n");
}

void entradaValorK(){
    printf("Você escolheu uma função que necessita de elementos para a sua construção\n");
    printf("Insira o valor de K: ");    
}

void entradaValorX(){
    printf("Insira o valor de X: ");
}

void entradaValorA(){
    printf("Insira o valor de A: ");
}

void entradaValorB(){
    printf("Insira o valor de B: ");
}

