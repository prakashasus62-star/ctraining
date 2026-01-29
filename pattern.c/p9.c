#include<stdio.h>
int main(){
    int space=4;
    int star=1;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=space; j++){
            printf(" ");
        }
        for(int k=1;k<=star;k++){
            printf("*");
        }
        printf("\n");
        space--;
        star+=2;
    }
    int space1 = 0;
    int star2 = 9;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= space1; j++) {
            printf(" ");
        }
        for (int k = 1; k <= star2; k++) {
            printf("*");
        }

        printf("\n");

        space1++;      
        star2 -= 2;   
    }




}