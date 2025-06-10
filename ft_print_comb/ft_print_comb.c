#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int i = 0;
    while(i <= 9)
    {
        int j = 0;
        while(j <= 9)
        {
            int z = 0;
            while(z <= 9)
            {
                if (i < j && j < z)
                {
                    ft_putchar(i + '0');
                    ft_putchar(j + '0');
                    ft_putchar(z + '0');
                    if (!(i == 7 && j == 8 && z == 9))
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                }
                z++;
            }
            j++;
        }
        i++;
    }
}

int main(void){
    ft_print_comb();
}