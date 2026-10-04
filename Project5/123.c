#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    double x, y, d = 1;
    double F;
    int A, B, C;

    printf("¬ведите x и y: ");
    scanf("%lf %lf", &x, &y);

    F = (cos(y) * cos(y) + 2.4 * d) /
        (exp(y) + log(sin(x) * sin(x) + 6));

    A = (int)x;
    B = (int)y;
    C = (int)F;

    printf("”словие а выполнено (1 - да, 0 - нет): %d\n",
        ((A % 2 == 0) && (B % 2 != 0)) ||
        ((A % 2 != 0) && (B % 2 == 0)));

    printf("”словие б выполнено (1 - да, 0 - нет): %d\n",
        (A % 3 == 0) &&
        (B % 3 == 0) &&
        (C % 3 == 0));

    return 0;
}