#include <stdio.h>
int main(){
    printf("Enter your mark");
    int mark;
    scanf("%d",&mark);
    switch (mark/10)
    {
    case 9:
    printf("Grade A");
    break;
    case 8:
    printf("Grade B");
    break;
    case 7:
    printf(" Grade c");
    break;
    case 6:
    printf("  grade D");
    break;
    case 5:
    printf("Grade E");
    break;
    case 4:
    printf("Grade F");
    break;
    case 3:
    printf("Supplementry");
    case 2:
    printf("Fail");
    break;
    }

    }
