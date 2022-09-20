#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "RUS");
puts("Задание 3\n");

int a, b;
scanf("%d", &a);
scanf("%d", &b);
printf("%s\n", "___________________");
printf("%s\n", "| a*b | a+b | a-b |");
printf("%s\n", "___________________");
printf("|%2d*%2d|%2d+%2d|%2d-%2d|\n", a, b, a, b, a, b);
printf("%s\n", "___________________");
printf("|%5d|%5d|%5d|\n", a*b, a+b, a-b);
return 0;
}