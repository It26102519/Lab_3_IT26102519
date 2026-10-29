#include <stdio.h>
#include <math.h>
 
int main(void) {
    double area, height, base;
 
    printf("Area of the sail: ");
    scanf("%lf", &area);
 
    height = sqrt(3 * area);
    base = (2.0 / 3.0) * height;
 
    printf("Height of the sail: %.2f meters\n", height);
    printf("Base of the sail: %.2f meters\n", base);
 
    return 0;
}
 
