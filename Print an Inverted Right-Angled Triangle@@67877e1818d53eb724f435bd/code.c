// Your code here...
#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1n;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }printf("\n");
    }
}