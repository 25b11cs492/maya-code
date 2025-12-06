#include <stdio.h>
int main() {
    int year;
    scanf("%d", &year);
    int lasttwo = year % 100;
    printf("%02d",lasttwo);
    return 0;
}
