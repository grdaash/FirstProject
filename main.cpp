#include <iostream>
#include "FunctionsNames.h"

int main()
{
    int var;
    do
    {
        printf("«Генератор задания 23 ЕГЭ по информатике с вычислением ответа и проверкой ваших знаний!»\n\nВыберите режим работы программы:\n");
        printf("Нажмите 1, если хотите перейти в режим «Вручную»(конструктор задачи);\n");
        printf("Нажмите 2, если хотите перейти в режим автоматической генерации задания;\n");
        printf("Нажмите 3, если хотите перейти в режим «Экзамен»;\n");
        printf("Нажмите 0, если хотите завершить программу.\n");
        do
        {
            printf("Вы выбрали вариант №");
            scanf("%d",&var);
            if (var<0 || var>3)
                printf("Введите число от 0 до 3\n");
        }
        while (var<0 || var>3);
        printf("\n");
        if (var==1)
        {
            ManualInput();
            printf("\nОтвет: ");
            TaskResponse();
        }
        if (var==2)
        {
            text();
            printf("\nОтвет: ");
            TaskResponse();
        }
        if (var==3)
            ExamMode();
    }
    while (var!=0);
    return 0;
}
