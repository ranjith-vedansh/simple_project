#include <stdio.h>

#include <stdio.h>

float divide(float num1, float num2) {
    if (num2 == 0) {
        printf("Error! Division by zero.\n");
        return 0;
    }
    return num1 / num2;
}

int main() {
    float num1, num2, result;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    result = divide(num1, num2);
    if (num2 != 0) {
        printf("%.2f / %.2f = %.2f\n", num1, num2, result);
    }
    return 0;
}