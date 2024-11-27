#include <stdio.h>
int main() {
    int chan = 0; 
    int le = 0;   
    int number; 

    printf("Nhap 5 so nguyen :\n");
    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0) {
            chan++; 
        } else {
            le++;  
        }
    }
    printf("So luong so chan la: %d\n", chan);
    printf("So luong so le la: %d\n", le);

    return 0;
}

