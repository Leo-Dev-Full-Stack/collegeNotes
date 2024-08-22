#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float lado, perimetro;
    printf("Digite o lado do quadrado, em cm: ");
    scanf("%f", &lado);
    perimetro = lado*4;
    printf("O perimetro vale %f cm \n", perimetro);
    system("pause");
    return 0;
}