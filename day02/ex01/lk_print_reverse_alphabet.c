void lk_putchar(char c);

void lk_print_reverse_alphabet() {
    int i = 122;
    while (i > 96) {
        lk_putchar(i--);
    }
}