#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "questao03.h"
int resposta=0,cont1=0,cont10=0,cont100=0;
void entrada03(int *valorCompra, int *valorPagamento){
    printf("Digite o valor da compra: ");
    scanf("%d", valorCompra);
    printf("Digite o valor do pagamento: ");
    scanf("%d", valorPagamento);
}

void processamento03(int *valorCompra, int *valorPagamento, int *troco){
    if(*valorCompra > *valorPagamento){
        resposta = 0;
    }else if(*valorPagamento>*valorCompra){
        resposta = 1;
        *troco = (*valorPagamento) - (*valorCompra);
        while(*troco>=100){
            *troco = *troco -100;
            cont100++;
        }
        while(*troco>=10){
            *troco = *troco -10;
            cont10++;
        }
        while(*troco>=1){
            *troco = *troco -1;
            cont1++;
        }
    }
}

void saida03(int res, int cont100, int cont10, int cont1){
    if(resposta==0){
        printf("\nPagamento Negado");
    }else{
        printf("\n%d nota(s) de 100", cont100);
        printf("\n%d nota(s) de 10", cont10);
        printf("\n%d nota(s) de 1", cont1);
    }

}

void questao03(){
    int valorCompra, valorPagamento, troco;
    entrada03(&valorCompra, &valorPagamento);
    processamento03(&valorCompra, &valorPagamento, &troco);
    saida03(resposta, cont100, cont10, cont1);
}
