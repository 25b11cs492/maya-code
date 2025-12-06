#include <stdio.h>
int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);
    int max_distance = 5 * X;
    if (max_distance >= Y)
    printf("YES");
    else
    printf("NO");
    return 0;
}
