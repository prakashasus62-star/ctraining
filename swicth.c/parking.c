#include <stdio.h>
int main(){
    int type,hours,rate;
    scanf("%d",&type);
    scanf("%d",&hours);
    switch(type)
    {
    case 1:
        rate=10;
        break;
    case 2:
        rate=20;
        break;
    default:
        rate=20;
        break;
    }
    printf("Parking Fee ₹%d",rate*hours);
    return 0;
}