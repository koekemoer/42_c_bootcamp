void lk_putchar(char c);

void lk_print_comb() {
    char x = '0';
    char y = '1';
    char z = '2';

    while (x < '8') {
        while (y < '9') {
            while (y <= x) {
                y++;
            }
            while (z <= '9') {
                while (z <= y) {
                    z++;
                }

                lk_putchar(x);
                lk_putchar(y);
                lk_putchar(z);

                if (z <= '9') {
                    lk_putchar(',');
                    lk_putchar(' ');
                }
                z++;
            }
            z = '2';
            y++;
        }
        y = '1';
        x++;
    }
}

// void print_combo(char x, char y, char z) {
//     lk_putchar(x);
//     lk_putchar(y);
//     lk_putchar(z);
// }

// void print_seperator() {
//     lk_putchar(',');
//     lk_putchar(' ');
// }