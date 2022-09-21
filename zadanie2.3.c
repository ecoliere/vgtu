#include <stdio.h>
#include <locale.h>
void main(void)
{
    setlocale(LC_ALL, "RUS");
    int n = 4;
    printf("Дано:\n\t 4 \n\t 333 \n\t        \nОтвет:\n\t%5.3f", n/333.);
}