#include <stdio.h>

int main() {
    int accounttype;
    int years;
    int interst = 0;

    scanf("%d", &accounttype);
    scanf("%d", &years);

    switch (accounttype) {
        case 1:
            interst = 4;
            break;

        case 2:
            if (years <= 3) {
                interst = 5;
            } else {
                interst = 7;
            }
            break;

        default:
            printf("Invalid account type");
            return 0;
    }

    printf("Interest %d%%", interst);

    return 0;
}