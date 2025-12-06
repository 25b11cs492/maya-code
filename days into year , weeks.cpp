#include<stdio.h>
int main(){
    int D;
    scanf("%d", &D);
    int years = D/ 365;
    int weeks = (D % 365) / 7;
    printf("%d", years);
    printf("%d", weeks);
    return 0;
}
