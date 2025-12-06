#include <stdio.h>
int main(){
    float basic, da, hra, gross;
    scanf("%f", &basic);
    if (basic <= 10000) {
        da = 0.80 * basic;
        hra = 0.20 * basic;
    }
    else if (basic <= 20000) {
        da = 0.90 * basic;
        hra = 0.25 * basic;
    }
    else{
        da = 0.95 * basic;
        hra = 0.30 * basic;
    }
    gross = basic + da + hra;
    printf("%.2f", gross);
    return 0;
}
