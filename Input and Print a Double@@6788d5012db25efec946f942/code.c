#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double a;
    scanf("%llf",&a);
    printf("You entered: %llf", a);
    return 0;
}