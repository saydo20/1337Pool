#include <unistd.h>

void ft_putchar(char c)
{
    write(1 , &c , 1);
}

void print_hex(unsigned char c)
{
    char *hex = "0123456789abcdef";

    char first = hex[c / 16];

    char second = hex[c % 16];

    ft_putchar(first);
    ft_putchar(second);
}

void ft_str_is_printable(char *str){
    int i = 0;
    while(str[i] != '\0'){
        if (!(str[i] >= 32 && str[i] <= 126))
        {
            ft_putchar('\\');
            print_hex(str[i]);
        }
        else 
            ft_putchar(str[i]);
        i++;
    }
}


int main(void)
{
    char a[] = "Coucou\ntu vas bien ?";
    ft_str_is_printable(a);
}

