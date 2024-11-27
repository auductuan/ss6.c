#include <stdio.h>
int main() {
    char mkDung[] = "123456"; 
    char mkNhap[20];          
    int dung = 1;             

    printf("Nhap mat khau: ");
    scanf("%s", mkNhap);
    for (int i = 0; mkDung[i] != '\0' || mkNhap[i] != '\0'; i++) {
        if (mkDung[i] != mkNhap[i]) {
            dung = 0; 
            break;
        }
    }

    if (dung) {
        printf("M?t kh?u dúng!\n");
    } else {
        printf("M?t kh?u sai!\n");
    }

    return 0;
}

