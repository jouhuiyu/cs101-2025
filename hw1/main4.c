#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Hello";  // 字串陣列
    int len = strlen(a); // 計算字串長度

    // 交換第一個與最後一個字元
    char temp = a[0];
    a[0] = a[len - 1];
    a[len - 1] = temp;

    printf("%s\n", a); // 印出交換後的結果
    return 0;
}
