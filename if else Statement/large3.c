#include <stdio.h>
int main(){
    
    int n=10;
    int m=80;
    int k=60;
    if(n>m){
        if(n>k){
            printf("%d n1 is greator",n);
        }
    }else if(m>k){
        if(m>n){
            printf("%d n2 is greator",m);
        }
    }
    else{
        printf(" %dn3 is greator",k);
    }
    return 0;
}