#include <stdio.h>
#include <math.h>

int main() {
    char operacao;
    float n1, n2, resultado;
    
    // Entrada de dados
    printf("Digite '+' para soma, '-' para subtração, '*' para multiplicação e '/' para divisão:\n");
    scanf(" %c", &operacao);
    printf("Digite o primeiro número:");
    scanf("%f", &n1);
    printf("Digite o segundo número:");
    scanf("%f", &n2);
    
    // Verificação e cálculos
    if (operacao == '/' && n2 == 0) {
        printf("Não é possível realizar divisão por zero.");
    } else {
        switch (operacao) {
            case '+':
                resultado = n1 + n2;
                printf("Resultado da soma: %f\n", resultado);
                break;
            case '-':
                resultado = n1 - n2;
                printf("Resultado da subtração: %f\n", resultado);
                break;
            case '*':
                resultado = n1 * n2;
                printf("Resultado da multiplicação: %f\n", resultado);
                break;
            case '/':
                resultado = n1 / n2;
                printf("Resultado da divisão: %f\n", resultado);
                break;
            default:
                printf("Operação selecionada inválida.\n");
        }
    }

    return 0;
}
