#include <stdio.h>

int main() {
    float a, b, c; 
    float d, x1, x2; 
    float can;
    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            printf(c == 0 ? "Vo so nghiem\n" : "Vô nghiem\n");
        } else {
            printf("Nghiem: x = %.2f\n", -c / b);
        }
    } else {
        d = b * b - 4 * a * c;
        if (d >= 0) {
            can = d; 
            float tam;
            do {
                tam = can;
                can = 0.5 * (tam + d / tam);
            } while (tam - can > 0.00001);

            if (d > 0) {
                x1 = (-b + can) / (2 * a);
                x2 = (-b - can) / (2 * a);
                printf("Nghiem phân biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
            } else {
                x1 = -b / (2 * a);
                printf("Nghiem kép: x = %.2f\n", x1);
            }
        } else {
            printf("Vô nghiem\n");
        }
    }

    return 0;
}

