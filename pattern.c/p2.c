#include<stdio.h>
int main(){
    int n=5;
    int out;
    int in;
    int print=0;
    for(out =1; out<=n; out++){
        for(in=1; in<=out; in++){
            print++;
            printf("%d ",print%2);

        }
        printf("\n");
    }
}