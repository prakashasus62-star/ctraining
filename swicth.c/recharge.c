#include <stdio.h>
int main(){
    int plantype;
    int paymentamount;
    scanf("%d",&plantype);
    scanf("%d",paymentamount);
    int card=11;
    int card2=12;


    switch (plantype)
    {
    case 1:
    if(card==11 &&  card2==12){
        printf("%d",paymentamount-20);


    }
    break;
    case 2:
    if(card==11 && card2==12){
        printf("%d",paymentamount-20);


    }
    break;

    
    default:
    printf("Invalid");
        break;
    }

}