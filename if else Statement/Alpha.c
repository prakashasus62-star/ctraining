#include <stdio.h>
int main(){
    char ch='9';
    if(ch>='1' && ch<='9'){
        printf("Digit");
    }
    else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        printf("Alphabet");
    }
    else{
        printf("Special Character");
    }
}