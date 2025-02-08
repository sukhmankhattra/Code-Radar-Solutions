#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[10]="s";
    scanf("%s",&str);
    printf("You entered: %s",str);
    getchar();
    return 0;
}