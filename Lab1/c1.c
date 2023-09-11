#include <stdio.h>

int main(int argc, char const *argv[])
{
    int p, v, t;
    scanf("%d", &p);
    scanf("%d", &v);

    t = v - p;

    printf("%d\n", t / 500);
    t = t % 500;
    printf("%d\n", t / 100);
    t = t % 100;
    printf("%d\n", t / 50);
    t = t % 50;
    printf("%d\n", t / 10);
    t = t % 10;
    printf("%d\n", t / 5);
    t = t % 5;
    printf("%d\n", t / 1);
    t = t % 1;

    return 0;
}
