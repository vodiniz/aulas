#include <stdio.h>

int main(void){

    int x0, y0, x1, y1, distance;
    scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
    distance = ((abs(x1 - x0) + abs(y1 - y0)));
    printf("%d\n", distance);
    return 0;
}