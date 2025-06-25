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
char *ft_strcpy(char *dest, char *src)
{
    int i = 0 ;
    while(src[i] != '\0')
    {
        dest[i]= src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main(void)
{
    char src[] = "1337 C Piscine";
    char dest[100];

    ft_strcpy(dest, src);
    ft_putstr(dest);
}