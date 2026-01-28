#include<stdio.h>
int main(){
    int num=122;
    int rev=0;
    for(int i=1; num!=0;);{
        int rem=num%10;
        rev=rev*10+rem;
        num=num/10;

    }
    printf("%d",rev);
}