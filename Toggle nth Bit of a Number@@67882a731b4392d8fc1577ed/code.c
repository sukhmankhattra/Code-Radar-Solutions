// Your code here...
#include <stdio.h>

int main() {
    int number, n;
    scanf("%d %d", &number, &n);
    printf("%d\n", number ^ (1 << n));
    return 0;
}
