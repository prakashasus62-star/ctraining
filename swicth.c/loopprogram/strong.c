#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int oroginal=n;
    int sum=0;
    for(;n>0;){
        int digit=n%10;
        int fact=1;
        for(int j=1;j<=digit;j++){
            fact=fact*j;
            
        }
        sum=sum+fact;
         n=n/10;
    }
    if(sum==oroginal){
        printf("Strong number");
    }else{
        printf("Not a strong number");
    }

}
