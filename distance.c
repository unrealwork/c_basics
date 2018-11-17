#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double d = sqrt((y1 - y2) * (y1 - y2) + (x1 - x2) * (x1 - x2));
    printf("%.2f", d);
}
