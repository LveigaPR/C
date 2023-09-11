#include <stdio.h>

int main()
{
    float C, F, K;
    
    printf("Digite uma temperatura em graus celsius:\n");
    scanf(" %f", &C);
    
    F = (C * 9/5) + 32;
    K = C + 273.15;

    printf("Temperatura em Fahrenheit: %f\n", F);
    printf("Temperatura em Kelvin: %f\n", K);

    return 0;
}
