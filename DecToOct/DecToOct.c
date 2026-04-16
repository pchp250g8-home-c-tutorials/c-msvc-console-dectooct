// DecToOct.c : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>

int main(int argc, char* argv[])
{
    long long uDecNumber, uTempVal;
    unsigned int nOctalDigits = 0;
    printf("Input an unsigned integer number\r\n");
    scanf("%lld", &uDecNumber);
    if (uDecNumber < 0 || uDecNumber > UINT32_MAX)
    {
        printf("Incorrect number format\r\n");
        getchar();
        getc(stdin);
        return 0;
    }
    uTempVal = uDecNumber;
    while (uTempVal > 0)
    {
        nOctalDigits++;
        uTempVal /= 8;
    }
    if (nOctalDigits > 0)
    {
        char* szOctalNum = (char*)calloc(nOctalDigits + 1, sizeof(char));
        if (szOctalNum == NULL) return -1;
        _strset(szOctalNum, 0);
        uTempVal = uDecNumber;
        for (unsigned int i = 0; i < nOctalDigits; i++)
        {
            int nOctDigit = uTempVal % 8;
            char chOctDighit = '0' + nOctDigit;
            szOctalNum[nOctalDigits - 1 - i] = chOctDighit;
            uTempVal /= 8;
        }
        printf("The octal equivalent of the decimal number %lld is %s\r\n",uDecNumber,szOctalNum);
        free(szOctalNum);
    }
    else
    {
        char szOctalNum[] = "0";
        printf("The octal equivalent of the decimal number %lld is %s\r\n", uDecNumber,szOctalNum);
    }
    getchar();
    getc(stdin);
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
