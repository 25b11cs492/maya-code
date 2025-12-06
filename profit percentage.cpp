#include <stdio.h>
int main()
{
    float cp, sp, profitpercent;
    scanf("%f %f",&cp, &sp);
    profitpercent = ((sp - cp) / cp) * 100;
    printf("%.2f", profitpercent);
    return 0;
}
