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
    int j = 0;
    while (j < 16)
    {
        ft_putchar(buffer[j]);
        j++;
    }
    ft_putchar(':');
    ft_putchar(' ');
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

/*

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_char_to_hexad(char c)
{
    char hex[] = "0123456789abcdef";

    char a = hex[c / 16];
    char b = hex[c % 16];
    ft_putchar(a);
    ft_putchar(b);
}

void ft_print_adress(unsigned long addr)
{
    char hex[] = "0123456789abcdef";
    char result[16];
    int i = 15;
    while (i >= 0)
    {
        result[i] = hex[addr % 16];
        addr /= 16;
        i--;
    }
    int j = 0;
    while (j < 16)
    {
        ft_putchar(result[j]);
        j++;
    }
    ft_putchar(':');
    ft_putchar(' ');
}

void *ft_print_memory(void *addr, unsigned int size)
{
    // column 1
    unsigned int i = 0;
    char *ptr = (char *)addr;
    while (i < size)
    {
        ft_print_adress((unsigned long)(ptr + i));
        int j = i;
        while (j < i + 16 && j < size)
        {
            ft_char_to_hexad(ptr[j]);
            if (j % 2 == 1)
                ft_putchar(' ');
            j += 1;
        }
        int k = i;
        while (k < i + 16 && k < size)
        {
            if (ptr[k] >= 32 && ptr[k] <= 127)
                ft_putchar(ptr[k]);
            else
                ft_putchar('.');
            k += 1;
        }
        ft_putchar('\n');
        i += 16;
    }
}
int main(void)
{
    int size = 47;
    char addr[] = "ouzerfzfzrfa faeufufao faeufaefhobrf eribre va";
    ft_print_memory(addr, size);
    return 0;
}*/
