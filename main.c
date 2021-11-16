#include "func.h"
#include "func.c"
#include "interface.c"
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
    setlocale(LC_ALL,"");

    int op = 0, opSubMenu = 0;
    float valorK, valorX, valorA, valorB;

    do{
    menuPrincipal();
    op = verificacaoTipoInt();

    switch(op){
        case 1:
            entradaValorX();
            valorX = verificacaoTipoFloat();
            entradaValorK();
            valorK = verificacaoTipoFloat();

            subMenu();
            opSubMenu = verificacaoTipoInt();

            switch (opSubMenu){
            case 1:
                op1funcao(valorX, valorK);
                break;
            case 2:
                op1derivada(valorX);
                break;
            case 3:
                entradaValorA();
                valorA = verificacaoTipoFloat();
                entradaValorB();
                valorB = verificacaoTipoFloat();
                op1integral(valorK, valorA, valorB);
                break;
            case 4:
                break;
            default:
                opcaoInvalida();
                subMenu();
                opSubMenu = verificacaoTipoInt();
                break;
            }
            break;
        case 2:
            entradaValorX();
            valorX = verificacaoTipoFloat();
            entradaValorK();
            valorK = verificacaoTipoFloat();

            subMenu();
            opSubMenu = verificacaoTipoInt();

            switch (opSubMenu){
            case 1:
                op2funcao(valorX, valorK);
                break;
            case 2:
                op2derivada(valorX, valorK);
                break;
            case 3:
                entradaValorA();
                valorA = verificacaoTipoFloat();
                entradaValorB();
                valorB = verificacaoTipoFloat();
                op2integral(valorK, valorA, valorB);
                break;
            case 4:
                break;
            default:
                opcaoInvalida();
                subMenu();
                opSubMenu = verificacaoTipoInt();
                break;
            }
            break;
        case 3:
            entradaValorX();
            valorX = verificacaoTipoFloat();
            entradaValorK();
            valorK = verificacaoTipoFloat();

            subMenu();
            opSubMenu = verificacaoTipoInt();

            switch (opSubMenu){
            case 1:
                op3funcao(valorX, valorK);
                break;
            case 2:
                op3derivada(valorX, valorK);
                break;
            case 3:
                entradaValorA();
                valorA = verificacaoTipoFloat();
                entradaValorB();
                valorB = verificacaoTipoFloat();
                op3integral(valorK, valorA, valorB);
                break;
            case 4:
                break;
            default:
                opcaoInvalida();
                subMenu();
                opSubMenu = verificacaoTipoInt();
                break;
            }
            break;   
        case 4:
            entradaValorX();
            valorX = verificacaoTipoFloat();

            subMenu();
            opSubMenu = verificacaoTipoInt();

            switch (opSubMenu){
            case 1:
                op4funcao(valorX);
                break;
            case 2:
                op4derivada(valorX);
                break;
            case 3:
                entradaValorA();
                valorA = verificacaoTipoFloat();
                entradaValorB();
                valorB = verificacaoTipoFloat();
                op4integral(valorA, valorB);
                break;
            case 4:
                break;
            default:
                opcaoInvalida();
                subMenu();
                opSubMenu = verificacaoTipoInt();
                break;
            }
            break; 
        case 5:
            entradaValorX();
            valorX = verificacaoTipoFloat();

            subMenu();
            opSubMenu = verificacaoTipoInt();

            switch (opSubMenu){
            case 1:
                op5funcao(valorX);
                break;
            case 2:
                op5derivada(valorX);
                break;
            case 3:
                entradaValorA();
                valorA = verificacaoTipoFloat();
                entradaValorB();
                valorB = verificacaoTipoFloat();
                op5integral(valorA, valorB);
                break;
            case 4:
                break;
            default:
                opcaoInvalida();
                subMenu();
                opSubMenu = verificacaoTipoInt();
                break;
            }
            break;
        case 6:
            entradaValorX();
            valorX = verificacaoTipoFloat();

            subMenu();
            opSubMenu = verificacaoTipoInt();

            switch (opSubMenu){
            case 1:
                op6funcao(valorX);
                break;
            case 2:
                op6derivada(valorX);
                break;
            case 3:
                entradaValorA();
                valorA = verificacaoTipoFloat();
                entradaValorB();
                valorB = verificacaoTipoFloat();
                op6integral(valorA, valorB);
                break;
            case 4:
                break;
            default:
                opcaoInvalida();
                subMenu();
                opSubMenu = verificacaoTipoInt();
                break;
            }
            break;
        case 7:
            entradaValorX();
            valorX = verificacaoTipoFloat();

            subMenu();
            opSubMenu = verificacaoTipoInt();

            switch (opSubMenu){
            case 1:
                op7funcao(valorX);
                break;
            case 2:
                op7derivada(valorX);
                break;
            case 3:
                entradaValorA();
                valorA = verificacaoTipoFloat();
                entradaValorB();
                valorB = verificacaoTipoFloat();
                op7integral(valorA, valorB);
                break;
            case 4:
                break;
            default:
                opcaoInvalida();
                subMenu();
                opSubMenu = verificacaoTipoInt();
                break;
            }
            break;
        case 8:
            entradaValorX();
            valorX = verificacaoTipoFloat();

            subMenu();
            opSubMenu = verificacaoTipoInt();

            switch (opSubMenu){
            case 1:
                op8funcao(valorX);
                break;
            case 2:
                op8derivada(valorX);
                break;
            case 3:
                entradaValorA();
                valorA = verificacaoTipoFloat();
                entradaValorB();
                valorB = verificacaoTipoFloat();
                op8integral(valorA, valorB);
                break;
            case 4:
                break;
            default:
                opcaoInvalida();
                subMenu();
                opSubMenu = verificacaoTipoInt();
                break;
            }
            break;
        case 9:
            printf("\nEncerrando calculadora...");
            break;
        default:
            printf("\nOpção inválida!");
            continue;
    }

    } while(op!=9);
}