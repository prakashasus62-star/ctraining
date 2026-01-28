#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int n=5;
    for(int i=0; i<=5; i++){
        printf("%d",a);
        int c=a+b;
        a=b;
        b=c;
    }
}