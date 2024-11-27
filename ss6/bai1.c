#include <stdio.h>
int main() {
    int numbers[5];
    int tong = 0;
    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 != 0) {
            tong += numbers[i];
        }
    }
    printf("Tong cac so le la: %d\n", tong);

    return 0;
}

