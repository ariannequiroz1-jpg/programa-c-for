#include <stdio.h>

int main() {
    int inicio, fin, incremento;

    // Programa que imprime numeros desde un valor inicial hasta uno final usando incremento con for

    printf("Ingrese el numero inicial: ");
    scanf("%d", &inicio);

    printf("Ingrese el numero final: ");
    scanf("%d", &fin);

    printf("Ingrese el incremento: ");
    scanf("%d", &incremento);

    // Validacion: no permitir incremento cero o negativo
    if(incremento <= 0) {
        printf("El incremento debe ser mayor que 0\n");
        return 1;
    }

    for(int i = inicio; i <= fin; i += incremento) {
        printf("%d\n", i);
    }

    return 0;
}