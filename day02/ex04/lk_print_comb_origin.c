void lk_putchar(char c);

void print_combo(char x, char y, char z) {
    lk_putchar(x);
    lk_putchar(y);
    lk_putchar(z);
}

void print_seperator() {
    lk_putchar(',');
    lk_putchar(' ');
}

void lk_print_comb_origin() {
    char x = '0';
    char y = '1';
    char z = '2';

    while (z <= '9' && y <= '8' && x <= '7') {
        
        if (x != y && x != z && y != z) {
            print_combo(x, y, z++);
            // lk_putchar(x);
            // lk_putchar(y);
            // lk_putchar(z++);
        }

        if (z > '9') {
            y++;
            z = y + 1;            
        }

        if (y > '8') {
            x++;
            y = x + 1;
            z = y + 1;
        }

        if (x >= '7') {
            y = x + 1;
            z = y + 1;
        }

        if (z <= '9') {
            print_seperator();
            // lk_putchar(',');
            // lk_putchar(' ');
        }
        
    }
}