#include <unistd.h>


void ft_putchar(char c)
{
    write(1 , &c, 1);
}

void ft_print_alphabet(void)
{
    char x = 'z';
    while(x >= 'a')
    {
        ft_putchar(x);
        x--;
    }
}

int main(void){
    ft_print_alphabet();
}