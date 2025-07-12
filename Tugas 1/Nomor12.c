#include <stdio.h>
#include <stdlib.h> 
#define x "M/S"
#define y "M"

int main(){
    float v, s;
    printf("Input speed (Km/Hr)= " );
    scanf("%f", &v);

    float p;
    p = (v * 1000) / (60 * 60);

    printf("Input distance (M)= ");
    scanf("%f", &s);
    
    system("cls");
    printf("Input speed = %.2f %s\n", p, x);
    printf("Input distance = %.2f %s\n", s, y);

    float t;
    t = s / p;

    float a;
    a = (2 * s) / (t*t);
    printf("The acceleration is = %.2f M/S^2\n", a);

    printf("The time is = %.2f S\n", t);
    return 0;
}