#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main () {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float t1, t2, t3, timeNeeded;
    int input;

    do {
        printf("������ ��� ��������:\n");
        input = scanf("%f\t%f\t%f", &t1, &t2, &t3);

        // �������� ������ ����� � ��� �������
        while (getchar() != '\n');

        if (input != 3) {
            printf("������������ ���. ���� �����, ������ ��� �����.\n");
        } else if (t1 > 10000 || t2 > 10000 || t3 > 10000) {
            printf("���� ��� ����� ����� ����������� �������� 10000. ���� �����, ������ ����� ����� 10000.\n");
        }
    } while (input != 3 || t1 > 10000 || t2 > 10000 || t3 > 10000);

    // printf("�� �����: %.2f, %.2f, %.2f\n", t1, t2, t3);

    timeNeeded = ((t1 + t2 + t3) / 3) / 3;

    printf("��� ���������� ��� �'������ ������: %.2f �����\n", timeNeeded);

    printf ("�������� ����-��� ������ ��� ��������� ��������.");
    getch ();
    return 0;
}
