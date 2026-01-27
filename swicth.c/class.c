#include <stdio.h>
int main(){
    int sleeper;
    int age;
    scanf("%d",&sleeper);
    scanf("%d",&age);
    int b;
    switch (sleeper)
    {
    case 1:
    if(age<=12){
        b=300/2;
        printf("%d",b);
    }else if(age<=60){
        b=33/100*300;
    }

        break;
        case 2:
        printf("300");
        break;
    
    default:
    printf("Invalid");
        break;
    }
}