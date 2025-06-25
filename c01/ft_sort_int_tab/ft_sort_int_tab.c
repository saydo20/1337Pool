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

void ft_sort_int_tab(int *tab, int size)
{
    int i, j, tmp;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1 - i)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    int a[] = {1, 5, 6, 37, 46, 265};
    ft_sort_int_tab(a, 6);
    print_array(a, 6);
}