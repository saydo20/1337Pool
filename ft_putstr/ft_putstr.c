#include <unistd.h>


void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    if (!str)
        return;

    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}
int main(void)
{
    ft_putstr("saad jdia");
}