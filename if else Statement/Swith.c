#include <stdio.h>
int main(){
    int n1=5;
    int n2=3;
    int k=1;
    switch(k){
        case 1:
        int add=n1+n2;
        printf("%d",add);
        break;
        default:{
            printf("invalid");
        }
    }
    return 0;
    }