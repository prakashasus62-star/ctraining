#include <stdio.h>
int main(){
    int a=12;
    int b=18;
    int small=0;
    if(a<b){
        small=a;
    }
    else{
        small=b;
    }
    int Gcf=0;
    for(int i=1; i<=small; i++){
        if(a%i==0 && b%i==0){
            Gcf=i;
        }
    }
    printf("%d",Gcf);
    return 0;
}