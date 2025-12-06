#include <stdio.h>
int main() {
    double cp, sp, losspercent;
    scanf("%lf %lf",&cp, &sp);
    losspercent = ((cp - sp)/ cp) * 100;
    printf("%.2lf", losspercent);
    return 0;
}
