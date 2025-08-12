#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int is_valid_base(char *base)
{
    int i, j;
    int len = ft_strlen(base);

    if (len < 2)
        return 0;

    for (i = 0; i < len; i++)
    {
        if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
            return 0;
        for (j = i + 1; j < len; j++)
        {
            if (base[i] == base[j])
                return 0;
        }
    }
    return 1;
}

void ft_putnbr_base(int nbr, char *base)
{
    long nb = nbr;
    int base_len = ft_strlen(base);

    if (!is_valid_base(base))
        return;

    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }

    if (nb >= base_len)
        ft_putnbr_base(nb / base_len, base);
    ft_putchar(base[nb % base_len]);
}
int main(void)
{
    ft_putnbr_base(3, "0123456789");
}

