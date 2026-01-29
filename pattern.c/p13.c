#include <stdio.h>

int main(){
    int space = 6;

    for(int i = 1; i <= 4; i++){   
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }


        for(int k = 1; k <= space; k++){
            printf(" ");
        }
        for(int j = i; j >= 1; j--){
            printf("%d", j);
        }

        printf("\n");
        space -= 2;   
    }

    return 0;
}