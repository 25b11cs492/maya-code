#include <stdio.h>
int main(){
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int total = a + b + c + d + e;
    float percentage = (total / 500.0) * 100;
    if (percentage >= 90)
    printf("Grade A");
    else if (percentage >= 80)
    printf("Grade B");
    else if (percentage >= 70)
printf("Grade C");
else if (percentage >= 60)
printf("Grade D");
else if (percentage >= 40)
printf("Grade E");
else 
printf("Grade F");
return 0;
}
