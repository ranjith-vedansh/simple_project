#include <stdio.h>

float add(float num1, float num2) {
    return num1 + num2;
}

int main() {
    float num1, num2, result;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    result = add(num1, num2);
    printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    return 0;
}