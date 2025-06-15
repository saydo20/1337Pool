#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c , 1);
}

void ft_print_comb2(void)
{
    int i = 0;
    while(i <= 99)
    {
        int j = 0;
        while( j <= 99)
        {
            if (i < j)
            { 
                ft_putchar((i / 10) + '0');
                ft_putchar((i % 10) + '0');
                ft_putchar(' ');
                ft_putchar((j / 10) + '0');
                ft_putchar((j % 10) + '0');

                if (!(i == 98 && j == 99))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
            }
            j++;
        }
        i++;
    }
}
int main(void){
    ft_print_comb2();
}

