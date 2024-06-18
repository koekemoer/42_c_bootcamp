#include <unistd.h>

void lk_putchar(char c) {
    write(1, &c, 1);
}