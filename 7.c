#include <stdio.h>
#include <locale.h>

enum FIRM {
    BOOK,
    MAGZINE,
    PAPER,
    FLOER,
    BULLETIN
};

enum RECTANGLE {
    HEIGHT = 10,
    WIDTH = 3,
};

struct elem
{
    unsigned  play:1;
    unsigned  pause:1;
    unsigned  load:1;
};
union MP3{

int i;
struct elem err;

};
void main() {
    setlocale(LC_ALL, "Rus");
    enum FIRM paper = PAPER;
    printf("%d", paper);
    enum RECTANGLE height = HEIGHT, width = WIDTH;
    printf("������� �������������� = %d\n", height * width);
    printf("�������� �������������� = %d\n", (height + width) * 2);

    union MP3 mp3;
    scanf("%x", &mp3.i);
    printf("���������������: %d\n�����: %d\n������: %d\n", mp3.err.play, mp3.err.pause, mp3.err.load);

    return 0;
}
