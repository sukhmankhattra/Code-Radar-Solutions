#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100]="a";
    char str1[100]="b";
    scanf("%s",&str);
    scanf("%s",&str1);
    printf("You entered: %s and %s",str,str1);
    return 0;
}