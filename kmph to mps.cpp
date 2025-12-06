#include <stdio.h> 
int main() {
    float speed, mps;
    scanf("%f", &speed);
    mps = speed * 1000 / 3600;
    printf("%.2f", mps);
    return 0;
}
