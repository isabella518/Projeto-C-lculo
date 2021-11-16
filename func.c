#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

// Validação de tipo de variável
int verificacaoTipoInt(){
  int input, temp, status;
    status = scanf("%d", &input);
    while(status!=1){
        while((temp=getchar()) != EOF && temp != '\n'); //limpar buffer
        printf("\nOpção inválida!!\n Escolha uma opção: ");
        status = scanf("%d", &input);
    }
    return input;
}

int verificacaoTipoFloat(){
  float input, temp, status;
    status = scanf("%f", &input);
    while(status!=1){
        while((temp=getchar()) != EOF && temp != '\n'); //limpar buffer
        printf("\nOpção inválida!!\n Digite um número: ");
        status = scanf("%f", &input);
    }
    return input;
}

// Opção 1 do SubMennu
float op1funcao(float x, float k){
  return printf("\n\n\tf(%.4f) = %.4f",x,k);
}

float op2funcao(float x, float k){
  float result = pow(x,k);
  return printf("\n\n\tf(%.4f) = %.4f",x,result);
}

float op3funcao(float x, float k){
  float result = pow(k,x);
  return printf("\n\n\tf(%.4f) = %.4f",x,result);
}

float op4funcao(float x){
  float result = log(x);
  return printf("\n\n\tf(%.4f) = %.4f",x,result);
}

float op5funcao(float x){
  float result = 1/x;
  return printf("\n\n\tf(%.4f) = %.4f",x,result);
}

float op6funcao(float x){
  float radianos = (x*M_PI)/180;
  float result = sin(radianos);
  return printf("\n\n\tf(%.4f) = %.4f",x,result);
}

float op7funcao(float x){
  float radianos = (x*M_PI)/180;
  float result = cos(radianos);
  return printf("\n\n\tf(%.4f) = %.4f",x,result);
}

float op8funcao(float x){
  float radianos = (x*M_PI)/180;
  float result = tan(radianos);
  return printf("\n\n\tf'(%.4f) = %.4f",x,result);
}

// Opção 2 do SubMenu
float op1derivada(float x){
  return printf("\n\n\tf'(%.4f) = 0",x);
}

float op2derivada(float x, float k){
  float result = pow(k*x,k-1);
  return printf("\n\n\tf'(%.4f) = %.4f",x,result);
}

float op3derivada(float x, float k){
  float result = pow(k,x)*log(k) ;
  return printf("\n\n\tf'(%.4f) = %.4f",x,result);
}

float op4derivada(float x){
  float result = 1/x;
  return printf("\n\n\tf'(%.4f) = %.4f",x,result);
}

float op5derivada(float x){
  float result = -1/pow(x,2);
  return printf("\n\n\tf'(%.4f) = %.4f",x,result);
}

float op6derivada(float x){
  float result = cos(x);
  return printf("\n\n\tf'(%.4f) = %.4f",x,result);
}

float op7derivada(float x){
  float result = -sin(x);
  return printf("\n\n\tf'(%.4f) = %.4f",x,result);
}

float op8derivada(float x){
  float result = pow(1/cos(x),2);
  return printf("\n\n\tf'(%.4f) = %.4f",x,result);
}

// Opção 3 do SubMenu
float op1integral(float k, float a, float b){
  float resultA= k*a;
  float resultB= k*b;
  float result = resultB - resultA;
  return printf("\n\n\tIntegral(%.4f,%.4f) = %.4f",a,b,result);
}

float op2integral(float k, float a, float b){
  float resultA= pow(a,k+1)/k+1;
  float resultB= pow(b,k+1)/k+1;
  float result = resultB - resultA;
  return printf("\n\n\tf'(%.4f) = %.4f",result);
}

float op3integral(float k, float a, float b){
  float resultA= pow(k,a)/log(abs(k));
  float resultB= pow(k,b)/log(abs(k));
  float result = resultB - resultA;
  return printf("\n\n\tf'(%.4f) = %.4f",result);
}

float op4integral(float a, float b){
  float resultA= a*(log(a)-1);
  float resultB= b*(log(b)-1);
  float result = resultB - resultA;
  return printf("\n\n\tf'(%.4f) = %.4f",result);
}

float op5integral(float a, float b){
  float resultA= log(abs(a));
  float resultB= log(abs(b));
  float result = resultB - resultA;
  return printf("\n\n\tf'(%.4f) = %.4f",result);
}

float op6integral(float a, float b){
  float resultA= -cos(a);
  float resultB= -cos(b);
  float result = resultB - resultA;
  return printf("\n\n\tf'(%.4f) = %.4f",result);
}

float op7integral(float a, float b){
  float resultA= sin(a);
  float resultB= sin(b);
  float result = resultB - resultA;
  return printf("\n\n\tf'(%.4f) = %.4f",result);
}

float op8integral(float a, float b){
  float resultA= -log(abs(cos(a)));
  float resultB= -log(abs(cos(b)));
  float result = resultB - resultA;
  return printf("\n\n\tf'(%.4f) = %.4f",result);
}