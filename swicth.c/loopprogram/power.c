#include <stdio.h>
int main(){
  int base,exponent;
  long power=1;
  scanf("%d",&base);
  scanf("%d",&exponent);
  for(int i=0; i<=exponent-1; i++){
    power=power*base;
  }
  printf("%d",power);
  return 0;

  



}