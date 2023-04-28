#include <stdio.h>
#include <math.h>
#include "questao01.h"


void entrada01(float *raio){
    printf("\nDigite o raio: ");
    scanf("%f", raio);
}

void processamento01(float *raio, float *area, float *diametro, float *perimetro, float *base){
    *diametro = 2*(*raio);
    *perimetro = (2*3.14)*(*raio);
    *area = 3.14*(*raio)*(*raio);
    *base = (4*3.14*(*raio)*(*raio)*(*raio))/3;
}

void saida01(float diametro, float perimetro, float area, float base){
    printf("\nDiametro: %.2f", diametro);
    printf("\nPerimetro: %.2f", perimetro);
    printf("\nArea: %.2f", area);
    printf("\nBase(caso fosse uma esfera): %.2f", base);
}

void questao01(){
    float raio, area, diametro, perimetro, base;
    entrada01(&raio);
    processamento01(&raio, &area, &diametro, &perimetro, &base);
    saida01(diametro, perimetro, area, base);
}
