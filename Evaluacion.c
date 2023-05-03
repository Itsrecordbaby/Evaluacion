#include <stdio.h>

int main() {
    int num1; // declaramos la variable para el número a convertir
    printf("Ingrese el numero que desea transformar en hexadecimal: ");
    scanf("%d", &num1); // solicitamos el valor que el usuario desea transformar

    // imprimimos el número ingresado y su valor hexadecimal
    printf("%d en hexadecimal = %x\n", num1, num1);

    return 0;
}
