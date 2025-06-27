#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar((nb % 10) + '0');
}
void print_hex(unsigned int c)
{
    char *hex = "0123456789abcdef";

    char first = hex[c / 16];

    char second = hex[c % 16];

    ft_putchar(first);
    ft_putchar(second);
}

void ft_puthexa(int nbr)
{
    if (nbr / 16 > 16)
        ft_puthexa(nbr / 16);
    print_hex(nbr);
}

void ft_putbinary(int nbr)
{

    if (nbr / 2 > 0)
    {
        ft_putbinary(nbr / 2);
    }
    ft_putchar((nbr % 2) + '0');
}
void ft_putoctal(int nbr)
{
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }
    if (nbr / 8 > 0)
    {
        ft_putoctal(nbr / 8);
    }
    ft_putchar((nbr % 8) + '0');
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}
int ft_is_repeat(char *str)
{
    int len = ft_strlen(str);
    if (len == 2 && str == "01")
        return 1;
    if (len == 10 && str == "0123456789")
        return 1;
    if (len == 16 && str == "0123456789ABCDEF")
        return 1;
    if (len == 8 && str == "poneyvif")
        return 1;
    return 0;
}

void ft_putnbr_base(int nbr, char *base)
{
    int base_len = ft_strlen(base);
    if (ft_strlen(base) < 2)
        return;
    if (ft_is_repeat(base))
        return;
    if (base_len == 10)
        ft_putnbr(nbr);
    if (base_len == 16)
        ft_puthexa(nbr);
    if (base_len == 2)
        ft_putbinary(nbr);
    if (base_len == 8)
        ft_putoctal(nbr);
}

int main(void)
{
    int i = 42;
    char base[] = "poneyvif";
    ft_putnbr_base(i, base);
}