// Your code here...
#include <stdio.h>

int main() {
    int number, position = 0;
    scanf("%d", &number);
    while ((number & 1) == 0) {
        number >>= 1;
        position++;
    }
    printf("%d\n", position);
    return 0;
}
