#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int findStr (char symbol, char str[]){

    for (int i = 0; i < length(str); i++){
        if (symbol == str[i]){
            return 1;
        }
    }

    return 0;
}

int equalval (char str1[], char str2[]){
    if(length(str1) == length(str2)){
        for (int i = 0; i < length(str1); i++){
            if(str1[i] != str2[i]){
                return 0;
            }
        }
        return 1;
    }
return 0;
}

int length (char str[]){

    int count = 0;

    while (str[count] != '\0'){
        count++;
    }

    return count;

}

void contact (char first_str[], char second_str[]){
    int temp_iterat,iterat = 0;

    char exp[length(first_str) + length(second_str)];
    temp_iterat = 0;

    while (first_str[temp_iterat] != '\0'){
    exp[temp_iterat] = first_str[temp_iterat];
    temp_iterat++;
    }
    iterat += temp_iterat;
    temp_iterat = 0;

    while (second_str[temp_iterat] != '\0'){
    exp[temp_iterat+iterat] = second_str[temp_iterat];
    temp_iterat++;
    }
    iterat += temp_iterat;

    exp[iterat] = '\0';
    temp_iterat = 0;
    while (exp[temp_iterat] != '\0'){
    printf("%c", exp[temp_iterat++]);
    }
    printf("\n");
}
int search (char str1[], char str2[]){

    int temp_count = 0;
    int max_count = -1;

    for (int i = 0; i < length(str2); i++){
        if(findStr(str2[i], str1) == 0){
            temp_count++;

        }
        else{
                if(max_count < temp_count){
                    max_count = temp_count;
                }
                temp_count = 0;
        }

    }
    if(max_count < temp_count){
        max_count = temp_count;
    }
    return max_count;
}
void main() {

    setlocale(LC_ALL, "Rus");
    char str1[20],str2[20];

    printf("Введите строки для сложения \n");
    scanf("%s %s", str1, str2);
    contact(str1, str2);

    printf("Введите строки для сравнения \n");
    scanf("%s %s", str1, str2);
    if(equalval(str1, str2) == 1){
        printf("Строки равны \n");
    }
    else{
     printf("Строки не равны \n");
    }

    printf("Введите строку для определения её длины \n");
    scanf("%s", str1);
    printf("%d \n", length(str1));

    printf("Введите строки для поиска максимальной подстраки из второй строки в первой строке \n");
    scanf("%s %s", str1, str2);
    printf("%d \n", search(str1, str2));

    return 0;
}
