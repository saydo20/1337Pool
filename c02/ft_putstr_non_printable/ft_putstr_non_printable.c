#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_hex(char c)
{
    char *hex = "0123456789abcdef";

    char first = hex[(unsigned char)c / 16];

    char second = hex[(unsigned char)c % 16];

    ft_putchar(first);
    ft_putchar(second);
}

void ft_putstr_non_printable(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
            ft_putchar(str[i]);
        else
        {
            ft_putchar('\\');
            print_hex(str[i]);
        }
        i++;
    }
}

int main(void)
{
    char b = 200;
    char a[] = "Coucou\ntu vas bien ?";
    a[3] = b;
    ft_putstr_non_printable(a);
}
