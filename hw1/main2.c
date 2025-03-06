#include <stdio.h>
#include <ctype.h>

void decodeRLE(const char *encoded) {
    while (*encoded) {
        char ch = *encoded++; // 讀取字母
        if (*encoded && isdigit(*encoded)) {
            int count = *encoded++ - '0'; // 轉換數字
            for (int i = 0; i < count; i++) {
                putchar(ch); // 重複輸出字母
            }
        }
    }
    putchar('\n'); // 換行
}

int main() {
    char encoded[] = "A4B1C3f3";
    decodeRLE(encoded);
    return 0;
}
