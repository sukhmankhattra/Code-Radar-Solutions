#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[10]="a";
    char str1[10]="b";
    scanf("%s",&str);
    scanf("%s",&str1);
    printf("%s and %s",str,str1);
    return 0;
}