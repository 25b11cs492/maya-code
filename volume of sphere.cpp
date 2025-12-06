#include <stdio.h>
#define PI 3.14
int main() {
    float r, volume;
    scanf("%f", &r);
    volume = (4.0 / 3.0) * PI * r * r * r;
    printf("%.2f", volume);
    return 0;
}
