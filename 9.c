#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Rus");

    int duration, costAbonent, costOne;
    printf("Введите продолжительность разговоров \n");
    scanf("%d", &duration);
    printf("Введите велечину абонентской платы \n");
    scanf("%d", &costAbonent);
    if(duration < 499){
        printf("%d \n", costAbonent);
    }
    else{
        printf("Введите стоимость минуты сверх тарифа \n");
        scanf("%d", &costOne);
        while(costOne < 499/costAbonent){
            printf("Введите корректную стоимость");
            scanf("%d", &costOne);
        }
        printf("%d \n", (duration - 499) * costOne + costAbonent);
    }

    char *str[10] = {"Ноль","Один","Два","Три","Четыре", "Пять", "Шесть", "Семь", "Восемь", "Девять"};

    int position;
    scanf("%d", &position);
    printf("%s", str[position]);
    return 0;
}
