#include <stdio.h>

float add(float number_1, float number_2) {
    return number_1 + number_2;
}

float subtract(float number_1, float number_2) {
    return number_1 - number_2;
}

float multiply(float number_1, float number_2) {
    return number_1 * number_2;
}

float divide(float number_1, float number_2) {
    if (number_2 != 0.0f) {
        return number_1 / number_2;
    } else {
        printf("Нельзя делить на ноль!\n");
        return 0;
    }
}

int main() {
    float number_1, number_2;
    char action;
    
    printf("Введи первое число: ");
    scanf("%f", &number_1);
    
    printf("Введи второе число: ");
    scanf("%f", &number_2);
    
    printf("Выбери операцию (+,-,*,/): ");
    scanf(" %c", &action);
    
    switch (action) {
        case '+':
            printf("Результат: %.2f\n", add(number_1, number_2));
            break;
        case '-':
            printf("Результат: %.2f\n", subtract(number_1, number_2));
            break;
        case '*':
            printf("Результат: %.2f\n", multiply(number_1, number_2));
            break;
        case '/':
            printf("Результат: %.2f\n", divide(number_1, number_2));
            break;
        default:
            printf("Неверная операция!");
    }
    return 0;
}