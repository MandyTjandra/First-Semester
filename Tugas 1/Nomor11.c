#include <stdio.h>


int main(){
    float m, n;
    printf("Input m side: ");
    scanf("%f", &m );

    printf("Input n side: ");
    scanf("%f", &n);

       if (m < n) {
        printf("m must be larger than n.\n");
        return 0;
    }

    float side1 = (m*m) - (n*n);
    printf("Side 1 is equal to %.2f\n", side1);

    float side2 = 2*m*n;
    printf("Side 2 is equal to %.2f\n", side2);

    float hypotenuse = (m*m) + (n*n);
    printf("Hypotenuse is equal to %.2f\n", hypotenuse);

    return 0;
}  