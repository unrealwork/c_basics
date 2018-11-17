#include <stdio.h>
#include <math.h>

int main() {
    double a, b, alpha;
    scanf("%lf %lf %lf", &a, &b, &alpha);
    double pi = 3.141593;
    double rad = alpha * pi / 180.0;
    double d = 0.5 * a * b * sin(rad);
    printf("%.2f", d);
}
