#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[] = "10001111"; // 8-bit 二進位字串
    int decimal = strtol(a, NULL, 2); // 將二進位字串轉換為整數

    printf("%X\n", decimal); // 以 16 進位格式輸出 (大寫)
    return 0;
}
