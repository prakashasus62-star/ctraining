#include <stdio.h>
int main(){
    int a=12;
    int b=24;
    int High;
    if(a>b){
        High=a;
    }
    else{
        High=b;
    }
    int Lcm=0;
    for(int i=1; i<=High; i++){
        if(a%i==0 && b%i==0){
            Lcm=i;
        }
    }
    printf("%d",Lcm);
    return 0;
}