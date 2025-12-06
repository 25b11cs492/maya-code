#include <stdio.h>
int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    int n = (Z - Y) / X;
    printf("%d", n);
    return 0;
}
