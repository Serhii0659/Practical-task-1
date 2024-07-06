#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main () {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float t1, t2, t3, timeNeeded;
    int input;

    do {
        printf("Введіть три значення:\n");
        input = scanf("%f\t%f\t%f", &t1, &t2, &t3);

        // Очищення буферу вводу в разі помилки
        while (getchar() != '\n');

        if (input != 3) {
            printf("Неправильний ввід. Будь ласка, введіть три числа.\n");
        } else if (t1 > 10000 || t2 > 10000 || t3 > 10000) {
            printf("Одне або більше чисел перевищують значення 10000. Будь ласка, введіть числа менше 10000.\n");
        }
    } while (input != 3 || t1 > 10000 || t2 > 10000 || t3 > 10000);

    // printf("Ви ввели: %.2f, %.2f, %.2f\n", t1, t2, t3);

    timeNeeded = ((t1 + t2 + t3) / 3) / 3;

    printf("Час необхідний для з'їдання пирога: %.2f годин\n", timeNeeded);

    printf ("Натисніть будь-яку клавішу щоб завершити програму.");
    getch ();
    return 0;
}
