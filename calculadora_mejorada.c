#include <stdio.h>
#include <stdlib.h>

void print_menu() {
    printf("\n=== Calculadora Simple ===\n");
    printf("Selecciona una operación:\n");
    printf("1) Suma (+)\n");
    printf("2) Resta (-)\n");
    printf("3) Multiplicación (*)\n");
    printf("4) División (/)\n");
    printf("5) Salir\n");
    printf("Opción: ");
}

int main() {
    int choice;
    double a, b, result;

    while (1) {
        print_menu();
        if (scanf("%d", &choice) != 1) {
            printf("Entrada no válida. Terminando.\n");
            break;
        }
        if (choice == 5) {
            printf("Adiós!\n");
            break;
        }
        if (choice < 1 || choice > 5) {
            printf("Opción incorrecta. Inténtalo de nuevo.\n");
            // Clear input buffer
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            continue;
        }
        printf("Introduce el primer número: ");
        if (scanf("%lf", &a) != 1) {
            printf("Entrada no válida. Terminando.\n");
            break;
        }
        printf("Introduce el segundo número: ");
        if (scanf("%lf", &b) != 1) {
            printf("Entrada no válida. Terminando.\n");
            break;
        }
        switch (choice) {
            case 1:
                result = a + b;
                printf("%.2lf + %.2lf = %.2lf\n", a, b, result);
                break;
            case 2:
                result = a - b;
                printf("%.2lf - %.2lf = %.2lf\n", a, b, result);
                break;
            case 3:
                result = a * b;
                printf("%.2lf * %.2lf = %.2lf\n", a, b, result);
                break;
            case 4:
                if (b == 0) {
                    printf("Error: división por cero no permitida.\n");
                } else {
                    result = a / b;
                    printf("%.2lf / %.2lf = %.2lf\n", a, b, result);
                }
                break;
        }
        // Clear input buffer before next loop iteration
        int c; while ((c = getchar()) != '\n' && c != EOF) {}
    }
    return 0;
}
