#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float f;
    scanf("%f",&f);
    printf("You entered: %f",f);


    printf("%s", welcome());
    return 0;
}