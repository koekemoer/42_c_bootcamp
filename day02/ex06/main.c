#include <limits.h>
#include <stdio.h>

void lk_putchar(char c);

void lk_putnbr(int nb);

int main() {

    printf("INT MAX=%d\n", INT_MAX);
    printf("INT MIN=%d\n", INT_MIN);

    lk_putchar('l');
    lk_putchar('k');
    lk_putchar('_');
    lk_putchar('f');
    lk_putchar('t');
    lk_putchar('_');
    lk_putchar('2');
    lk_putchar('4');
    lk_putchar('\n');
    lk_putchar('\n');
    printf("n=%d\n", INT_MAX);
    lk_putnbr(INT_MAX);
    lk_putchar('\n');
    lk_putnbr(42);
    lk_putchar('\n');
    lk_putnbr(8);
    lk_putchar('\n');
    printf("n=%d\n", INT_MIN);
    lk_putnbr(INT_MIN);
    lk_putchar('\n');
    printf("n=%d\n", INT_MIN + 1);
    lk_putnbr(INT_MIN + 1);
    // lk_putnbr(1234567);
    lk_putchar('\n');
    printf("n=%d\n", -134534);
    lk_putnbr(-134534);
    lk_putchar('\n');
}