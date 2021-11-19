#include <stdio.h>
#include <locale.h>
#include <math.h>

typedef struct{
        int X,Y;
}coords;


void generLen (coords Cords[], int count){

    int repair = 0;
    float distance[count*(count-1)];

    for(int i = 0; i < count; i++){
        scanf("%d %d", &Cords[i].X, &Cords[i].Y);
    }

    for(int i = 0; i < count; i++){
        for(int j = 0; j <count; j++){
            if(i != j) {
                    distance[i * count + j - repair] = sqrt(((Cords[i].X - Cords[j].X) * (Cords[i].X - Cords[j].X)) + ((Cords[i].Y - Cords[j].Y) *(Cords[i].Y - Cords[j].Y)));
            }
            else {
                repair++;
            }
        }
    }

    for(int i = 0; i < count*(count-1); i++){
        printf("%.2f \n", distance[i]);
    }
}


void splitNumber(int number){

    int *A2 = (int *)calloc(1,1 * sizeof(int));
    int i=-1;

    while(number > 0){
        i+=1;
        A2[i] = number % 10;
        A2 = (int *)realloc(A2,(i+1) * sizeof(int));
        number /=10;
    }

    for (int j = i; j >= 0; j--){

        printf("%d ", A2[j]);
    }

}
void main() {
    setlocale(LC_ALL, "Rus");

    int count, number;
    scanf("%d", &count);
    coords Cord[count];

    generLen(Cord, count);

    scanf("%d", &number)
    splitNumber(100000);
    return 0;
}
