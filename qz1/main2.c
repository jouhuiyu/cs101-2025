#include <stdio.h>

int main(){
    int i = 12345;
    int first = 0;
    int last = first = i % 10;
    
    while (i >= 10) {
        i /= 10;
        first = i % 10;
    }
    printf("first%d + last%d = %d", first, last, first + last);
    return 0;
}
