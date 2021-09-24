#include <stdio.h>
#include <locale.h>
int main(int argv, char** argc) {
setlocale(LC_ALL, "Rus");
int a_16, a_16_2, count;

printf("Введите в 16ной системе \n");
scanf("%x",&a_16);
printf("В 8ной системе = %o \n", a_16);


printf("%x сдвиг на 4 бита влево = %x \n", a_16, a_16 << 4);

printf("%x отрицание = %x \n", a_16, ~a_16);

printf("Введите новое число в 16 системе \n");
scanf("%x", &a_16_2);
printf("%x and %x = %x", a_16, a_16_2,  a_16 & a_16_2);
return 0;
}
