#include <stdio.h>
#include <string.h>

void runLengthEncoding(char *str) {
    int count;
    for (int i = 0; str[i] != '\0'; i++) {
        count = 1;
        while (str[i] == str[i + 1] && count < 9) { // 限制最多 9 次
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
    printf("\n");
}

int main() {
    char a[] = "AABBBCCCCddd";
    runLengthEncoding(a);
    return 0;
}
