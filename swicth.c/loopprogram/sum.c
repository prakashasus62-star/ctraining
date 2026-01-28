#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    int sum=0;
    for(int i=1; i<=k; i++){
        sum=sum+i;
    }
    printf("%d",sum);
}