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

int     ft_strncmp(char *s1, char *s2, unsigned int n){
    unsigned int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && i < n )
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return 0;
}

int main(void)
{
    char s1[] = "saadjdia";
    char s2[] = "saadjdio";
    ft_putnbr(ft_strncmp(s1, s2 , 3));
}
