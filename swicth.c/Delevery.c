#include <stdio.h>
int main(){
    int speed;
    scanf("%d",&speed);
    int amount;
    scanf("%d",&amount);
    switch (speed)
    {
    case 1:
    amount=50;
    printf("%d",amount);
    break;
    case 2:
    if(amount<1000){
        amount=100;
        printf("%d",amount);
    }
    else if(amount>=1000){
        printf("free");
    }
        break;
    
    default:
    printf("Invalid");
        break;
    }
}