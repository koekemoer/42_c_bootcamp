void lk_putchar(char c);

void lk_print_numbers() {
    int i = 48;
    while (i < 58) {
        lk_putchar(i++);
    }
}