#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
	system("chcp 1251");
	setlocale(LC_CTYPE, "RUS");


    char str[100];

    printf("Введите строку (Не более 99 символов): ");
    fgets(str, sizeof(str), stdin); 
   
    printf("Строка без первых букв в словах: ");
    int len = strlen(str);
    int word1 = 1; // Переменная для проверки первой буквы слова

    for (int i = 0; i < len; i++) {
        if (isspace(str[i])) // Если пробел, то написать пробел и word1 = 1
        {
            printf("%c", str[i]);
            word1 = 1;
        }

        else 
        {
            if (!word1) // Если это НЕ первая буква слова, то пишем слово, пока не будет пробела
            {
                printf("%c", str[i]);
            }

            word1 = 0; //Если это не пробел И ещё не было букв, то мы находимся на первой букве и word1 = 0
        }

    }
}








