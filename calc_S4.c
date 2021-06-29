#include <stdio.h>
#include <stdlib.h>

// Feito por: SAmuEL (@Saelblck)
// Feito em: 16/mar/21

void cabecalho();

int main() {
    float x, y, r;

    cabecalho();

    printf("\nInsira o primeiro valor: ");
    scanf("%f", &x);
    printf("\nInsira o segundo valor: ");
    scanf("%f", &y);

    //--- operações ---
    //soma
    r = x+y;
    printf("\n%.0f+%.0f=%.1f", x, y, r);

    //subtração
    r = x-y;
    printf("\n%.0f-%.0f=%.1f", x, y, r);

    //multiplicação
    r = x*y;
    printf("\n%.0f*%.0f=%.1f", x, y, r);

    //divisão
    r = x/y;
    printf("\n%.0f/%.0f=%.1f", x, y, r);

    printf("\n\n=== fim da operação ===\n\n");
return 0;
}
void cabecalho () {
    printf("\nCALC BLCK v1\n\n");
    printf("\n=== calculadora com operações simples ===\n");
    printf("\nfeito por: SAmuEL A (@saelblck)");
    printf("\nfeito em: 16/mar/21\n\n");
}