#include <stdio.h>

int main(int argv, char** argc) {

    char str[20];
    float a;

    printf("Vvedite stroku \n");
    scanf("%s", str);
    printf("Vvedite chislo \n");
    scanf("%f", &a);
    printf("Строка - %s\n", str);
    printf("Число - %f \n", a);
return 0;
}
