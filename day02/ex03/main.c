void lk_putchar(char c);

void lk_is_negative(int n);

int main() {
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
    lk_is_negative(42);
    lk_is_negative(-42);
    lk_is_negative(0);
    lk_putchar('\n');
}