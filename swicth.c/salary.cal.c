#include <stdio.h>

int main() {
    int code, experience;
    int salary = 0;
    scanf("%d", &code);
    scanf("%d", &experience);
    switch (code) {
        case 1:
        salary = 50000;
            if (experience >= 3)
                salary += experience * 5000;
            break;
        case 2:
            salary = 35000;
            if (experience >= 3)
                salary += experience * 5000;
            break;

        default:
            return 0;
    }
    printf("Salary ₹%d", salary);
    return 0;
}