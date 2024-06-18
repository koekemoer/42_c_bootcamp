void lk_putchar(char c);

void put_digits(int nb);

void lk_putnbr(int nb) {

    char c;
    int n;
    int i;
    char ch[10];

    n = nb;
    i = 9;

    if (n < 0) {
        n = -n;
        lk_putchar('-');
    }

    while (n > 0) {
        c = (n % 10) + '0';
        ch[i] = c;
        n /= 10;
        i--;
    }
    
    i = 0;
    while (i < 10) {        
        lk_putchar(ch[i]);
        ch[i] = '\0';
        i++;
    }
}

// TODO INT_MIN still an issue

// INT_MAX = 2147483647
// INT_MIN = -2147483648