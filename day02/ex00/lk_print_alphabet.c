void lk_putchar(char c);

void lk_print_alphabet() {
    int i = 97;
    while (i < 123) {
        lk_putchar(i++);
    }
}