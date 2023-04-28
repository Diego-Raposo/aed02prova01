#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "questao02.h"

void entrada02(float *salario_bruto){
    printf("Digite o salario bruto: ");
    scanf("%f", salario_bruto);
}

void processamento02(float *salario_bruto, float *salario_liquido){
    if(*salario_bruto<2000){
        *salario_liquido = *salario_bruto*0.9;
    }else{
        *salario_liquido = *salario_bruto*0.8;
    }
}

void saida02(float salario_liquido){
    printf("\nSalario liquido: %.2f\n", salario_liquido);
}

void questao02(){
    float salarioBruto, salarioLiquido;
    entrada02(&salarioBruto);
    processamento02(&salarioBruto, &salarioLiquido);
    saida02(salarioLiquido);
}
