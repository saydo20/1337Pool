#include <unistd.h>


void ft_putchar(char c)
{
    write(1, &c , 1);
}

void ft_print_numbers(void)
{
    char x = '0';
    while(x <= '9')
    {
    ft_putchar(x);
    x++;
    }
}

int main(void){
    ft_print_numbers();
}