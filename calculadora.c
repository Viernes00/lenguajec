#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Introduce un operador (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Introduce dos operandos: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: División por cero no permitida.\n");
            }
            break;
        default:
            printf("Error: Operador no válido.\n");
    }

    return 0;
}
