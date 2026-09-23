#pragma execution_character_set("utf-8")   
#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);  

    int X = 180;     
    int W = 4 * X;   
    int R = W - X;   
    int S = R / 3;   
    int Y = S * 52;  



    printf("На сладости за неделю:%d руб.\n", X);
    printf("Получает за неделю:4 * %d = %d руб.\n", X, W);
    printf("После сладостей:%d - %d = %d руб.\n", W, X, R);
    printf("Сберегает за неделю:%d / 3 = %d руб.\n", R, S);
    printf("За год (52 недели):%d * 52 = %d руб.\n", S, Y);
    printf("Ответ: Юра накопит за год %d руб.\n", Y);
    return 0;
}