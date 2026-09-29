#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "RUS");

float a, b;
puts("введи a и b через пробел");
scanf("%f%f", &a, &b);

printf("-------------------------------------------\n");
printf("|%13s|%13s|%13s|\n", "a * b", "a+b", "a-b");
printf("----------------------------+--------------\n");
printf("|%5g * %-5g|%5g + %-5g|%5g - %-5g|\n", a, b, a, b, a, b);
printf("+---------------------------+--------------\n");
printf("|%13g|%13g|%13g|\n", a * b, a + b, a - b);
printf("+------------------------------------------\n");

system("pause");
return 0;
}