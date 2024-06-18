void lk_putchar(char c);

void lk_is_negative(int n) {
    if (n < 0) {
        lk_putchar('N');
    } else {
        lk_putchar('P');
    }
}