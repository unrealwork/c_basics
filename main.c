#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x, y;
    scanf("%f %f", &x, &y);
    printf("%.0f", fabs(x - y));
    return 0;
}