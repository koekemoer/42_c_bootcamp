void lk_putchar(char c);

void print_seperator();

void print_combo(int x, int y);

void put_digits(int i);

void lk_print_comb2() {

    int x;
    int y;

    x = 0;
    y = 1;

    while (x < 99) {
        while (y < 100) {
            while (y <= x) {
                y++;
            }
            print_combo(x, y);
            if (x < 98) {
                print_seperator();
            }
            y++;
        }
        y = 1;
        x++;
    }
}

void put_digits(int i) {
    char a;
    char b;

    a = (i / 10) + '0';
    b = (i % 10) + '0';
    lk_putchar(a);
    lk_putchar(b);
}

void print_seperator() {
    lk_putchar(',');
    lk_putchar(' ');
}

void print_combo(int x, int y) {
    put_digits(x);
    lk_putchar(' ');
    put_digits(y);
}