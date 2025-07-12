#include <stdio.h>
#include <stdlib.h> 
int main (){

    float X1, Y1, X2, Y2, m, XT, YT, mtl, c;

    printf("Input point A (X1, Y1) = ");
    scanf("%f %f", &X1, &Y1);

    printf("Input point B (X2, Y2) = ");
    scanf("%f %f", &X2, &Y2);

    system("cls");
    printf("Input point A = (%.2f , %.2f)\n", X1, Y1);
    printf("Input point B = (%.2f , %.2f)\n", X2, Y2);

    m = (Y2-Y1) / (X2-X1);
    printf("The slope equals to = %.2f\n", m);

    XT = (X1 + X2) / 2;
    printf("The midpoint of X equals to = %.2f\n", XT);

    YT = (Y1 + Y2) / 2;
    printf("The midpoint of Y equals to = %.2f\n", YT);

    mtl = -1 / m;
    printf("The perpendicular gradient equals to = %.2f\n", mtl);

    c = YT - mtl * XT;
    printf("The constanta equals to = %.2f\n", c);

    printf("The line equation is Y = %.2fX + %.2f\n", mtl, c);

    return 0;
}