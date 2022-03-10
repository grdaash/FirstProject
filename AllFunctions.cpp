#include "FunctionsNames.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int FirstDigit=0,SecondDigit=0,AdditionalVariable=0,step=0,operations=0,FirstOperation=0,SecondOperation=0,ThirdOperation=0,choice=0,choice2=0,digits=0,a=0,b=0,c=0;
//текст задачи
void TaskText()
{
    printf("\nТекст задачи:\n\n");
    printf("У исполнителя %d команды:\n",step);
    if (step==2)
    {
        if (operations==1)
        {
            printf("1.Прибавить %d;\n2.Прибавить %d.\nПервая из них увеличивает число на %d, а вторая – на %d. ",FirstOperation,SecondOperation,FirstOperation,SecondOperation);
        }
        if (operations==2)
        {
            {
                printf("1.Умножить на %d;\n2.Умножить на %d.\nПервая из них увеличивает число в %d раз(-а), а вторая – в %d раз(-а). ",FirstOperation,SecondOperation,FirstOperation,SecondOperation);
            }
        }
        if(operations==3)
        {
            printf("1.Прибавить %d;\n2.Умножить на %d.\nПервая из них увеличивает число на %d, а вторая – увеличивает в %d раз(-а). ",FirstOperation,SecondOperation,FirstOperation,SecondOperation);
        }
        if (choice==2)
        {
            printf("Определите количество программ, которые число %d преобразуют в число %d с помощью предложенных операций.\n",FirstDigit,SecondDigit);
        }
        else
        {
            printf("Определите количество программ, которые преобразуют число %d в число %d с помощью предложенных операций и при этом траектория вычислений программы  ",FirstDigit,SecondDigit);
            if (choice2==1)
            {
                if (digits==1)
                    printf("содержит число %d.\n\n",a);
                if (digits==2)
                    printf("содержит числа %d и %d.\n\n",a,b);
                if (digits==3)
                    printf("содержит числа %d, %d и %d.\n\n",a,b,c);
            }
            else
            {
                if (digits==1)
                    printf("не содержит число %d.\n\n",a);
                if (digits==2)
                    printf("не содержит числа %d и %d.\n\n",a,b);
                if (digits==3)
                    printf("не содержит числа %d, %d и %d.\n\n",a,b,c);
            }
        }
    }
    if (step==3)
    {
        if (operations==1)
        {
            printf("1.Прибавить %d;\n2.Прибавить %d;\n3.Прибавить %d.\nПервая из них увеличивает число на %d, вторая – на %d, а третья – на %d. ",FirstOperation,SecondOperation,ThirdOperation,FirstOperation,SecondOperation,ThirdOperation);
        }
        if (operations==2)
        {
            {
                printf("1.Умножить на %d;\n2.Умножить на %d;\n3.Умножить на %d.\nПервая из них увеличивает число в %d раз(-а), вторая – в %d раз(-а), а третья – в %d раз(-а). ",FirstOperation,SecondOperation,ThirdOperation,FirstOperation,SecondOperation,ThirdOperation);
            }
        }
        if(operations==3)
        {
            printf("1.Прибавить %d;\n2.Прибавить %d;\n3.Умножить на %d.\nПервая из них увеличивает число на %d, вторая увеличивает на %d, а третья – увеличивает в %d раз(-а). ",FirstOperation,SecondOperation,ThirdOperation,FirstOperation,SecondOperation,ThirdOperation);
        }
        if (operations==4)
        {
            printf("1.Прибавить %d;\n2.Умножить на %d;\n3.Умножить на %d.\nПервая из них увеличивает число на %d, вторая – увеличивает в %d раз(-а),а третья – увеличивает в %d раз(-а). ",FirstOperation,SecondOperation,ThirdOperation,FirstOperation,SecondOperation,ThirdOperation);
        }
        if (choice==2)
        {
            printf("Определите количество программ, которые число %d преобразуют в число %d с помощью предложенных операций.\n",FirstDigit,SecondDigit);
        }
        if (choice==1)
        {
            printf("Определите количество программ, которые число %d преобразуют в число %d с помощью предложенных операций и при этом траектория вычислений программы ",FirstDigit,SecondDigit);
            if (choice2==1)
            {
                if (digits==1)
                    printf("содержит число %d.\n\n",a);
                if (digits==2)
                    printf("содержит числа %d и %d.\n\n",a,b);
                if (digits==3)
                    printf("содержит числа %d, %d и %d.\n\n",a,b,c);
            }
            if (choice2==2)
            {
                if (digits==1)
                    printf("не содержит число %d.\n\n",a);
                if (digits==2)
                    printf("не содержит числа %d и %d.\n\n",a,b);
                if (digits==3)
                    printf("не содержит числа %d, %d и %d.\n\n",a,b,c);
            }
        }
    }
}

//режим вручную(конструктор задачи)
void ManualInput()
{
    printf("В выбранном режиме вы можете самостоятельно задать параметры задачи с помощью конструктора.\nСейчас вам предстоит выбрать:\n1.Число, с которого начинается цепочка и которым заканчивается;\n2.Количество производимых программой команд(2-3 команды);\n3.Тип произовдимых действий над числами(сложение и произведения);\n4.Тип присутствия чисел в цепочке(включает 0-3 числа, либо не включает 0-3 числа) и выбор самих чисел.\n\n");
    int set;
    printf("Нажмите 1, чтобы продолжить;\nНажмите 0, чтобы выйти.\n");
    do
    {
        scanf("%d",&set);
        if (set<0 || set>1)
            printf("Введите 1 или 0\n");
    }
    while(set<0 || set>1);
    
    if (set==1)
    {
        printf("Выберите границы цепочки(натуральные числа, т.е. не равны 0).\n");
        
        printf("Введите первое число ");
        scanf("%d",&FirstDigit);
        if(FirstDigit<=0)
        {
            do
            {
                printf("Введите натуральное число!\n");
                scanf("%d",&FirstDigit);
            }
            while(FirstDigit<=0);
        }
        
        printf("Введите второе число ");
        scanf("%d",&SecondDigit);
        
        if(SecondDigit<=0)
        {
            do
            {
                printf("Введите натуральное число!\n");
                scanf("%d",&SecondDigit);
            }
            while(SecondDigit<=0);
        }
        
        if(SecondDigit<FirstDigit)
        {
            printf("Второе число должно быть больше первого, поэтому исправляем…\n");
            AdditionalVariable=FirstDigit;
            FirstDigit=SecondDigit;
            SecondDigit=AdditionalVariable;
            printf("Теперь первое число равно %d, а второе – %d\n",FirstDigit,SecondDigit);
        }
        printf("Выберите количество производимых программой команд: ");
        
        do
        {
            scanf("%d",&step);
            if (step<2 || step>3)
                printf("Введите 2 или 3.\n");
        }
        while(step<2 || step>3);
        
        printf("Выберите тип производимых над числами действий:\n\n");
        if (step==2)
        {
            printf("Введите 1, если хотите, чтобы оба действия были сложением;\nВведите 2, если хотите, чтобы оба действия были произведением;\nВведите 3, если хотите, чтобы одно из действий было сложением, а другое – произведением.\n");
            printf("Вводите числа, которые входят в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
            do
            {
                scanf("%d",&operations);
                if (operations<1 || operations>3)
                    printf("Введите число от 1 до 3\n");
            }
            while(operations<1 || operations>3);

            if (operations==1)
            {
                do
                {
                    printf("Введите на сколько следует увеличивать число при выполнении первой команды ");
                    scanf("%d",&FirstOperation);
                    if (FirstOperation<1)
                        printf("Введите натуральное число!\n");
                    if (FirstOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (FirstOperation<1 || FirstOperation>(int)sqrt(SecondDigit/2)+1);
    
                do
                {
                    printf("Введите на сколько следует увеличивать число при выполнении второй ");
                    scanf("%d",&SecondOperation);
                    if (SecondOperation<1)
                        printf("Введите натуральное число!\n");
                    if (SecondOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (SecondOperation<1 || SecondOperation>(int)sqrt(SecondDigit/2)+1);
            }
            if (operations==2)
            {
                do
                {
                    printf("Введите во сколько раз следует увеличивать число при выполнении первой команды ");
                    scanf("%d",&FirstOperation);
                    if (FirstOperation<2)
                        printf("Введите число больше 1!\n");
                    if (FirstOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (FirstOperation<2 || FirstOperation>(int)sqrt(SecondDigit/2)+1);
                do
                {
                    printf("Введите во сколько раз следует увеличивать число при выполнении второй ");
                    scanf("%d",&SecondOperation);
                    if (SecondOperation<2)
                        printf("Введите число больше 1!\n");
                    if (SecondOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (SecondOperation<2 || SecondOperation>(int)sqrt(SecondDigit/2)+1);
            }
            if (operations==3)
            {
                do
                {
                    printf("Введите на сколько следует увеличивать число при выполнении первой команды ");
                    scanf("%d",&FirstOperation);
                    if (FirstOperation<1)
                        printf("Введите натуральное число!\n");
                    if (FirstOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (FirstOperation<1 || FirstOperation>(int)sqrt(SecondDigit/2)+1);
                do
                {
                    printf("Введите во сколько раз следует увеличивать число при выполнении второй ");
                    scanf("%d",&SecondOperation);
                    if (SecondOperation<2)
                        printf("Введите число больше 1!\n");
                    if (SecondOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (SecondOperation<2 || SecondOperation>(int)sqrt(SecondDigit/2)+1);
            }
        }
        
        if (step==3)
        {
            printf("Введите 1, если хотите, чтобы все 3 действия были сложением;\nВведите 2, если хотите, чтобы все 3 действия были произведением;\nВведите 3, если хотите, чтобы два идействия были сложением, а третье – произведением;\nВведите 4, если хотите, чтобы два идействия были произведением, а третье – сложением.\n");
            printf("Вводите числа, которые входят в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
            do
            {
                scanf("%d",&operations);
                if (operations<1 || operations>4)
                    printf("Введите число от 1 до 4\n");
            }
            while(operations<1 || operations>4);
            if (operations==1)
            {
                do
                {
                    printf("Введите на сколько следует увеличивать число при выполнении первой команды ");
                    scanf("%d",&FirstOperation);
                    if (FirstOperation<1)
                        printf("Введите натуральное число!\n");
                    if (FirstOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (FirstOperation<1 || FirstOperation>(int)sqrt(SecondDigit/2)+1);
                do
                {
                    printf("Введите на сколько следует увеличивать число при выполнении второй ");
                    scanf("%d",&SecondOperation);
                    if (SecondOperation<1)
                        printf("Введите натуральное число!\n");
                    if (SecondOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (SecondOperation<1 || SecondOperation>(int)sqrt(SecondDigit/2)+1);
                do
                {
                    printf("Введите на сколько следует увеличивать число при выполнении третьей ");
                    scanf("%d",&ThirdOperation);
                    if (ThirdOperation<1)
                        printf("Введите натуральное число!\n");
                    if (ThirdOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (ThirdOperation<1 || ThirdOperation>(int)sqrt(SecondDigit/2)+1);
            }
            if (operations==2)
            {
                do
                {
                    printf("Введите во сколько раз следует увеличивать число при выполнении первой команды ");
                    scanf("%d",&FirstOperation);
                    if (FirstOperation<2)
                        printf("Введите число больше 1!\n");
                    if (FirstOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (FirstOperation<2 || FirstOperation>(int)sqrt(SecondDigit/2)+1);
                do
                {
                    printf("Введите во сколько раз следует увеличивать число при выполнении второй ");
                    scanf("%d",&SecondOperation);
                    if (SecondOperation<2)
                        printf("Введите число больше 1!\n");
                    if (SecondOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (SecondOperation<2 || SecondOperation>(int)sqrt(SecondDigit/2)+1);
                do
                {
                    printf("Введите во сколько раз следует увеличивать число при выполнении третьей ");
                    scanf("%d",&ThirdOperation);
                    if (ThirdOperation<2)
                        printf("Введите число больше 1!\n");
                    if (ThirdOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (ThirdOperation<2 || ThirdOperation>(int)sqrt(SecondDigit/2)+1);
            }
            if (operations==3)
            {
                do
                {
                    printf("Введите на сколько следует увеличивать число при выполнении первой команды ");
                    scanf("%d",&FirstOperation);
                    if (FirstOperation<1)
                        printf("Введите натуральное число!\n");
                    if (FirstOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (FirstOperation<1 || FirstOperation>(int)sqrt(SecondDigit/2)+1);
                do
                {
                    printf("Введите на сколько следует увеличивать число при выполнении второй ");
                    scanf("%d",&SecondOperation);
                    if (SecondOperation<1)
                        printf("Введите натуральное число!\n");
                    if (SecondOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (SecondOperation<1 || SecondOperation>(int)sqrt(SecondDigit/2)+1);
                do
                {
                    printf("Введите во сколько раз следует увеличивать число при выполнении третьей ");
                    scanf("%d",&ThirdOperation);
                    if (ThirdOperation<2)
                        printf("Введите число больше 1!\n");
                    if (ThirdOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (ThirdOperation<2 || ThirdOperation>(int)sqrt(SecondDigit/2)+1);
            }
            if (operations==4)
            {
                do
                {
                    printf("Введите на сколько следует увеличивать число при выполнении первой команды ");
                    scanf("%d",&FirstOperation);
                    if (FirstOperation<1)
                        printf("Введите натуральное число!\n");
                    if (FirstOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (FirstOperation<1 || FirstOperation>(int)sqrt(SecondDigit/2)+1);
                do
                {
                    printf("Введите во сколько раз следует увеличивать число при выполнении второй ");
                    scanf("%d",&SecondOperation);
                    if (SecondOperation<2)
                        printf("Введите число больше 1!\n");
                    if (SecondOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (SecondOperation<2 || SecondOperation>(int)sqrt(SecondDigit/2)+1);
                do
                {
                    printf("Введите во сколько раз следует увеличивать число при выполнении второй ");
                    scanf("%d",&ThirdOperation);
                    if (ThirdOperation<2)
                        printf("Введите число больше 1!\n");
                    if (ThirdOperation>(int)sqrt(SecondDigit/2)+1)
                        printf("Введдите число, которое входит в промежуток [1;%d]\n",(int)sqrt(SecondDigit/2)+1);
                }
                while (ThirdOperation<2 || ThirdOperation>(int)sqrt(SecondDigit/2)+1);
            }
        }
        
        printf("Хотите ли вы исключить или наоборот включить определённые числа в цепочку задачи?\n1 – да\n2 – нет\n");
        do
        {
            scanf("%d",&choice);
            if (choice<1 || choice>2)
                printf("Введите 1 или 2\n");
        }
        while(choice<1 || choice>2);
        
        if (choice==1)
        {
            printf("Нажмите 1, если хотите включить определённые числа в цепочку.\nНажмите 2, если хотите исключить определённые числа из цепочки.\n");
            do
            {
                scanf("%d",&choice2);
                if (choice2<1 || choice2>2)
                    printf("Введите 1 или 2\n");
            }
            while(choice2<1 || choice2>2);
            
            if (choice2==1)
                printf("Выберите количество чисел, которые обязательно должны быть включены в цепочку ");
            if (choice2==2)
                printf("Выберите количество чисел, которые обязательно должны быть исключены из цепочки ");
            do
            {
                scanf("%d",&digits);
                if (digits<1 || digits>3)
                    printf("Введите число от 1 до 3\n");
            }
            while(digits<1 || digits>3);
            
            printf("Введите выбранные числа(диапазон выбора: (%d;%d) )\n\n",FirstDigit,SecondDigit);
            if (digits==1)
            {
                do
                {
                    scanf("%d",&a);
                    if (a<=FirstDigit || a>=SecondDigit)
                        printf("Введите число, входящее в нужный диапазон(диапазон выбора: (%d;%d) )!\n",FirstDigit,SecondDigit);
                }
                while(a<=FirstDigit || a>=SecondDigit);
            }
            if (digits==2)
            {
                do
                {
                    printf("Введите первое число ");
                    scanf("%d",&a);
                    if (a<=FirstDigit || a>=SecondDigit)
                        printf("Введите число, входящее в нужный диапазон(диапазон выбора: (%d;%d) )!\n",FirstDigit,SecondDigit);
                }
                while(a<=FirstDigit || a>=SecondDigit);
                printf("Введите второе число ");
                do
                {
                    scanf("%d",&b);
                    if (b<=FirstDigit || b>=SecondDigit)
                        printf("Введите число, входящее в нужный диапазон(диапазон выбора: (%d;%d) )!\n",FirstDigit,SecondDigit);
                }
                while(b<=FirstDigit || b>=SecondDigit);//проверка на  ввод для правильности решения задачи
                if (b<a)
                {
                    int dop;
                    dop=b;
                    b=a;
                    a=dop;
                }
                
            }
            if (digits==3)
            {
                printf("Введите первое число ");
                do
                {
                    scanf("%d",&a);
                    if (a<=FirstDigit || a>=SecondDigit)
                        printf("Введите число, входящее в нужный диапазон(диапазон выбора: (%d;%d) )!\n",FirstDigit,SecondDigit);
                }
                while(a<=FirstDigit || a>=SecondDigit);
                printf("Введите второе число ");
                do
                {
                    scanf("%d",&b);
                    if (b<=FirstDigit || b>=SecondDigit)
                        printf("Введите число, входящее в нужный диапазон(диапазон выбора: (%d;%d) )!\n",FirstDigit,SecondDigit);
                }
                while(b<=FirstDigit || b>=SecondDigit);
                printf("Введите третье число ");
                do
                {
                    scanf("%d",&c);
                    if (c<=FirstDigit || c>=SecondDigit)
                        printf("Введите число, входящее в нужный диапазон(диапазон выбора: (%d;%d) )!\n",FirstDigit,SecondDigit);
                }
                while(c<=FirstDigit || c>=SecondDigit);
                //проверка на  ввод для правильности решения задачи
                if (b<a)
                {
                    int dop;
                    dop=b;
                    b=a;
                    a=dop;
                }
                if (c<a)
                {
                    int dop;
                    dop=c;
                    c=a;
                    a=dop;
                }
                if (c<b)
                {
                    int dop;
                    dop=c;
                    c=b;
                    b=dop;
                }
            }
        }
    }
}

void text()
{
    printf("В выбранном режиме текст задачи сгенирируется полностью автоматически!\n\n");
    int set;
    printf("Нажмите 1, чтобы продолжить;\nНажмите 0, чтобы выйти.\n");
    do
    {
        scanf("%d",&set);
        if (set<0 || set>1)
            printf("Введите 1 или 0\n");
    }
    while(set<0 || set>1);
    if (set==1)
        AutomaticGeneration();
}
//режим автоматической генерации
void AutomaticGeneration()
{
    srand(time(NULL));
//    if (set==1)
//    {
        do
        {
            FirstDigit=rand()%100+1;
            SecondDigit=rand()%100+1;
        }
        while(FirstDigit==SecondDigit);
        
        if(SecondDigit<FirstDigit)
        {
            AdditionalVariable=FirstDigit;
            FirstDigit=SecondDigit;
            SecondDigit=AdditionalVariable;
        }
        
        step=rand()%2+2;
        
        if (step==2)
            operations=rand()%3+1;
        if (step==3)
            operations=rand()%4+1;
        if (operations==1)
        {
            do
            {
                FirstOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
                SecondOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
                ThirdOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
            }
            while(FirstOperation==SecondOperation || FirstOperation==ThirdOperation || SecondOperation==ThirdOperation);
        }
       if (operations==2)
       {
           do
           {
               FirstOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
               SecondOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
               ThirdOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
           }
           while(FirstOperation==SecondOperation|| FirstOperation==ThirdOperation || SecondOperation==ThirdOperation || FirstOperation==1 || SecondOperation==1 || ThirdOperation==1);
       }
        if (operations==3 && step==2)
        {
            do
            {
                FirstOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
                SecondOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
            }
            while(FirstOperation==SecondOperation || SecondOperation==1);
        }
        if (operations==3 && step==3)
        {
            do
            {
                FirstOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
                SecondOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
                ThirdOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
            }
            while(FirstOperation==SecondOperation|| FirstOperation==ThirdOperation || SecondOperation==ThirdOperation || ThirdOperation==1);
        }
        if (operations==4)
        {
            do
            {
                FirstOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
                SecondOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
                ThirdOperation=rand()%((int)sqrt(SecondDigit/2)-1)+1;
            }
            while(FirstOperation==SecondOperation|| FirstOperation==ThirdOperation || SecondOperation==ThirdOperation || SecondOperation==1 || ThirdOperation==1);
        }
        
        choice=rand()%2+1;
        choice2=rand()%2+1;
        digits=rand()%3+1;
        //rand()%(b-a+1)+a
        do
        {
            a=rand()%(SecondDigit-FirstDigit+1)+FirstDigit;
            b=rand()%(SecondDigit-FirstDigit+1)+FirstDigit;
            c=rand()%(SecondDigit-FirstDigit+1)+FirstDigit;
            if (a>b)
            {
                int dop;
                dop=a;
                a=b;
                b=dop;
            }
            if (a>c)
            {
                int dop;
                dop=a;
                a=c;
                c=dop;
            }
            if (b>c)
            {
                int dop;
                dop=b;
                b=c;
                c=dop;
            }
        }
        while(a==b || a==c || b==c || a==FirstDigit || a==SecondDigit || b==FirstDigit || b==SecondDigit || c==FirstDigit || c==SecondDigit);
//    }
}

int Solution(int x, int y)
{
    if (x==y)
        return 1;
    if (x>y)
        return 0;
    
    if (choice2==2)
    {
        if (digits==1)
        {
            if (x==a)
                return 0;
        }
            
        if (digits==2)
        {
            if (x==a || x==b)
                return 0;
        }
            
        if (digits==3)
        {
            if (x==a || x==b || x==c)
                return 0;
        }
    }
    if (step==2)
    {
        if (operations==1)
            return Solution(x+FirstOperation,y)+Solution(x+SecondOperation,y);
        if (operations==2)
            return Solution(x*FirstOperation,y)+Solution(x*SecondOperation,y);
        if (operations==3)
            return Solution(x+FirstOperation,y)+Solution(x*SecondOperation,y);
    }
    if (step==3)
    {
        if (operations==1)
            return Solution(x+FirstOperation,y)+Solution(x+SecondOperation,y)+Solution(x+ThirdOperation,y);
        if (operations==2)
            return Solution(x*FirstOperation,y)+Solution(x*SecondOperation,y)+Solution(x*ThirdOperation,y);
        if (operations==3)
            return Solution(x+FirstOperation,y)+Solution(x+SecondOperation,y)+Solution(x*ThirdOperation,y);
        if (operations==4)
            return Solution(x+FirstOperation,y)+Solution(x*SecondOperation,y)+Solution(x*ThirdOperation,y);
    }
    
    return Solution(x,y);
}

void TaskResponse()
{
    if (choice==2)
        printf("%d\n\n",Solution(FirstDigit, SecondDigit));
    if (choice==1)
    {
        if (choice2==1)
        {
            if (digits==1)
                printf("%d\n\n",Solution(FirstDigit,a)*Solution(a,SecondDigit));
            if (digits==2)
                printf("%d\n\n",Solution(FirstDigit,a)*Solution(a,b)*Solution(b,SecondDigit));
            if (digits==3)
                printf("%d\n\n",Solution(FirstDigit,a)*Solution(a,b)*Solution(b,c)*Solution(c,SecondDigit));
        }
        if (choice2==2)
            printf("%d\n\n",Solution(FirstDigit, SecondDigit));
    }
}
void TaskResponse1(int &response)
{
    if (choice==2)
    {
        response=Solution(FirstDigit, SecondDigit);    }
    if (choice==1)
    {
        if (choice2==1)
        {
            if (digits==1)
            {
                response=Solution(FirstDigit,a)*Solution(a,SecondDigit);
            }
            if (digits==2)
            {
                response=Solution(FirstDigit,a)*Solution(a,b)*Solution(b,SecondDigit);
            }
            if (digits==3)
            {
                response=Solution(FirstDigit,a)*Solution(a,b)*Solution(b,c)*Solution(c,SecondDigit);
            }
        }
        if (choice2==2)
        {
            response=Solution(FirstDigit, SecondDigit);
        }
    }
}
void ExamMode()
{
    printf("В выбранном режиме будет составлен вариант из 5 заданий, которые вам предстоит решить самостоятельно. Программа автоматически проверит ваши знания и выставит вам оценку за выполненный набор заданий!\n\n");
    int set;
    printf("Нажмите 1, чтобы продолжить;\nНажмите 0, чтобы выйти.\n");
    do
    {
        scanf("%d",&set);
        if (set<0 || set>1)
            printf("Введите 1 или 0\n");
    }
    while(set<0 || set>1);
    
    if (set==1)
    {
        int response=0,answer,mark=0,answ=0;
        for (int i=1;i<=5;i++)
        {
            AutomaticGeneration();
            printf("\nЗадача №%d:\n",i);
            TaskText();
            printf("Введите ответ: ");
            scanf("%d",&answer);
            TaskResponse1(response);
            if(answer==response)
            {
                answ+=1;
                printf("Ответ верный.\n");
            }
            else
                printf("Правильный ответ – %d.\n",response);
        }
        printf("Количество правильных ответов равно %d\n",answ);
        if (answ==0 || answ==1)
            mark=1;
        if (answ==2)
            mark=2;
        if (answ==3)
            mark=3;
        if (answ==4)
            mark=4;
        if (answ==5)
            mark=5;
        printf("Ваша оценка – %d\n",mark);
    }
}
