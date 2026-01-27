#include <stdio.h>
int main(){
    int flightClass;
    scanf("%d",&flightClass);
    int weight,charge=0;
    scanf("%d",&weight);
    switch(flightClass)
    {
    case 1:
        charge=weight*300;
        if(charge==0)
            printf("Free");
        else
            printf("Extra Baggage Charge ₹%d",charge);
        break;
    case 2:
        if(weight<=3){
            printf("Free");
        }
        else{
            charge=(weight-3)*300;
            printf("Extra Baggage Charge ₹%d",charge);
        }
        break;
    default:
        printf("Invalid");
        break;
    }
}