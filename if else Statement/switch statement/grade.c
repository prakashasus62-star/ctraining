#include <stdio.h>
int main(){
    int mark; 
    scanf("%d",mark);
    int a=1;
    switch (a)
    {
    case 1:
    if(mark>=90){
        printf("Grdae A");
    }else if(mark>=80 && mark<=90){
        printf("Grade B");
    }else if(mark>=70 && mark<=80){
        printf("Grade c");
    }
    else if(mark>=60 && mark<=70){
        printf("Grade d");
    }
    else if(mark>=50 && mark<=60){
        printf("Grade e");
    }
    else if(mark>=40 && mark<=50){
        printf("Grade f");
    }
    else if(mark>=35 && mark<=39){
        printf("supplemntry");
    }
    else{
        printf("fail");
    }

        break;
    
    default:
    printf("Invalid");

        break;
    }
}