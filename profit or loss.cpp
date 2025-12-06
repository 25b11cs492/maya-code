#include <stdio.h>
int main(){
    int cost, sell;
    scanf("%d", &cost);
    scanf("%d", &sell);
    if (sell > cost)
printf("Profit");
else if (sell < cost)
printf("Loss");
else 
printf("No Profit and No Loss");
return 0;
}
