#include <unistd.h>

void ft_putchar(char c)
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
unsigned int ft_strlcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    if (n > 0)
    {
        while (src[i] != '\0' && i < n - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    return i;
}

#include <stdio.h>
int main(void)
{
    char src[] = "1337 C Piscine";
    char dest[100];
    printf("%d" , ft_strlcpy(dest, src, 8));
}