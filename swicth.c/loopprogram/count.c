#include <stdio.h>

int main() {
    int num = 12345;
    int count = 0;
    for (int temp = num; temp > 0; temp = temp / 10) {
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}