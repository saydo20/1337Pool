#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_hex(unsigned char c)
{
    char *hex = "0123456789abcdef";
    ft_putchar(hex[c / 16]);
    ft_putchar(hex[c % 16]);
}

void print_address(unsigned long addr)
{
    char *hex = "0123456789abcdef";
    char buffer[16];
    int i = 15;

    // convert addr to hex string from right to left
    while (i >= 0)
    {
        buffer[i] = hex[addr % 16];
        addr /= 16;
        i--;
    }



    // print the 16 hex digits
    for (i = 0; i < 16; i++)
        ft_putchar(buffer[i]);
}

void print_hex_content(unsigned char *addr, unsigned int size)
{
    int i = 0;
    while (i < 16)
    {
        if (i < (int)size)
            print_hex(addr[i]);
        else
        {
            ft_putchar(' ');
            ft_putchar(' ');
        }
        if (i % 2 == 1)
            ft_putchar(' ');
        i++;
    }
}

int main(void)
{
    int a;
    int *ptr = &a;

    print_address((unsigned long)ptr);
    ft_putchar(':');
    ft_putchar(' ');
    print_hex_content((unsigned char *)ptr, 16);
    ft_putchar('\n');
}
