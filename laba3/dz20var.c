
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <windows.h>

#define bitsVbytes 8
#define bytesVkbytes 1024

int main()
{

setlocale(LC_ALL, "RUS");
puts("Введи для подсчета скорость в бит");
float bits, kbytes;
scanf("%f", &bits);

kbytes = bits / bitsVbytes / bytesVkbytes;
printf("%.2f бит это %.2f в кбайт\n", bits, kbytes);

// кбайт в биты
puts("Введи кбайты, чтобы перевести в биты");
scanf("%f", &kbytes);
bits = kbytes * bitsVbytes * bytesVkbytes;
printf("%.2f кбайт это %.2f в битах\n", kbytes, bits);

system("pause");
return;
}