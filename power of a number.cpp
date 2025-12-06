#include <stdio.h>
int main(){
    long long x, y, m;
    scanf("%lld %lld %lld", &x, &y, &m);
    long long result = 1;
    for(long long i = 0; i<y; i++) {
        result = (result * x) % m;
    }
    printf("%lld", result);
    return 0;
}
