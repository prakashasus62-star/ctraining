#include <stdio.h>
int main(){
    int k=2;
    switch(k){
        case 1:
        printf("31 days");
        break;
        case 2:
        printf("28 days or 29 days");
        break;
        case 3:
        printf("31 days");
        break;
        default:
        printf("invalid");
    }
    return 0;
    }