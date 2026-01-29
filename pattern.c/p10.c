#include<stdio.h>
int main(){
    int star=1;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=star; j++){
            printf("*");
        }
        printf("\n");
        if(i<5){
            star++;
        }
        else{
            star--;
        }

        
    }
}
