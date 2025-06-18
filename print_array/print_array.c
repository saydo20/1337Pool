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

void print_array(int *tab, int size)
{
    int i;
    i = 0;
    while (i < size)
    {
        if (i != size)
        {
            ft_putchar(' ');
        }
        ft_putnbr(tab[i]);
        i++;
    }
}
int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    print_array(a, 5);
}
