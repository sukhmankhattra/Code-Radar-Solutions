#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[10]="a";
    char str1[10]="b";
    scanf("%a",&str);
    scanf("%b",&str1);
    printf("%a and %b",str,str1);
    return 0;
}