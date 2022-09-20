#include <studio.h>
#include <locale.h>
#define D 2.54
#define P 2.32166

void main(void)
{
    setlocale(LC_ALL, "RUS");
    puts("Задание 2");
    int dym, pulgada;
    float result;
    puts("Введите расстояние в дюймах");
    scanf("%d",&dym);
    result = D * dym;
    printf("%d дюмов - это%.1f см ", dym, result);
    puts("Введите расстояние в дюймах");
    scanf("%d",&pulgada);
    result = P * pulgada;
     printf("%d дюмов - это%.1f см ", pulgada, result);

}