#include <unistd.h>


void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_print_digit(int a)
{
    char c = a + '0';
    ft_putchar(c);
}

int main(void){
    ft_print_digit(2);
}