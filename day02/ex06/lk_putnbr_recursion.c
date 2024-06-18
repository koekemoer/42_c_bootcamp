void lk_putchar(char c);

void put_digits(int nb);

void lk_putnbr(int nb)
{
	if (nb < 0)
	{
		lk_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
		lk_putchar((char)nb + '0');
	else
	{
		lk_putnbr(nb / 10);
		lk_putnbr(nb % 10);
	}
}

// INT_MAX = 2147483647
// INT_MIN = -2147483648