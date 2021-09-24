#include <stdio.h>
#include <locale.h>
int main(int argv, char** argc) {
setlocale(LC_ALL, "Rus");
    int a;
    printf("Введите первое число для проверки \n");
    scanf("%d", &a);
    printf("%s",((a>=21) && (a<=56))? "Попадает" : "Не попадает");

    printf("Введите второе число для проверки \n");
    scanf("%x", &a);
    printf("12й бит = %d", (2>>1) & a);

return 0;
}
