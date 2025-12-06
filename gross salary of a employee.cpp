#include<stdio.h>
int main(){
    float salary, hra, da;
    scanf("%f", &salary);
    scanf("%f", &hra);
    scanf("%f", &da);
    float pf = 0.12 * salary;
    float gross = salary + hra + da + pf;
    printf("%.2f", pf);
    printf("%.2f", gross);
    return 0;
}
