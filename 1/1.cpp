#include <stdio.h>
#include <windows.h>

void Task424() {
    // Set Russian language for console
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int N;
    printf("Введите количество строк для узора:  jggfghouhhogvhiojholjbjivhghh,ghjlvhy");
    scanf_s("%d", &N);

    printf("Узор 4.2.4* по варианту 5 (зеркальный):\n");

    // Верхняя часть ромба
    for (int i = 1; i <= N; i++) {
        // Пробелы перед числами
        for (int k = 1; k <= N - i; k++) {
            printf("  ");
        }
        // Числа в возрастающем порядке
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Числа в убывающем порядке (без 1)
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Нижняя часть ромба
    for (int i = N - 1; i >= 1; i--) {
        // Пробелы перед числами
        for (int k = 1; k <= N - i; k++) {
            printf("  ");
        }
        // Числа в возрастающем порядке
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Числа в убывающем порядке (без 1)
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    Task424();
    return 0;
}
