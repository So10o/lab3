#include <studio.h>
#include <locale.h>
void main(void)
{
    
setlocale(LC_ALL, "RUS");
int num, A, c;
puts("Задание 1");
puts("Введите число","\n");
scanf("%d",&num);
A = num;
puts("Введено число A");
puts("Введено число B");
scanf("%d",&c);
puts("Введено число B");
printf("Сумма A+B=%=%d\n", c + num);
printf("Разность A-B=%=%d\n", c - num);
printf("Произведение A*B=%=%d\n", c * num);
printf("Частное B/A=%=%d\n", c / num);
printf("Остаток от B/A=%=%d\n", c % num);
}