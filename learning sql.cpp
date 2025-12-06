#include <stdio.h>
int main() {
    int R, C, E;
    scanf("%d %d %d", &R, &C, &E);
    int total_rows = R + E;
    int total_cell = total_rows * C;
    printf("%d", total_cell);
    return 0;

}
