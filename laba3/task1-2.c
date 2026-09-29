#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define D 2.54       // английский дюйм
#define D_isp 2.32166   

int main()
{
    setlocale(LC_ALL, "RUS");

    
    int num, num2;

    puts("введи число");
    scanf("%d", &num);
    printf("Введено число %d\n", num);
    puts("введи второе число");
    scanf("%d", &num2);

    printf("сумма = %d\n", num2 + num);
    printf("разность = %d\n", num2 - num);
    printf("произведение = %d\n", num2 * num);
    printf("частное = %d\n", num2 / num);
    printf("остаток = %d\n", num2 % num);


    int dym;
    float result;

    puts("введи дюймы");
    scanf("%d", &dym);

    result = D * dym;
    printf("%d английских дюймов это %.2f см\n", dym, result);

    result = D_isp * dym;
    printf("%d испанских дюймов это %.2f см\n", dym, result);

    system("pause");
    return 0;
}