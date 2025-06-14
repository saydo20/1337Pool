

void ft_sort_int_tab(int *tab, int size)
{
    int i, j, tmp;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1 - i)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}

#include <stdio.h>
int main(void)
{
    int a[] = {439085, 5678 , 4, 543};
    ft_sort_int_tab(a, 4);
    printf("%d " , a[0]);
    printf("%d ", a[1]);
    printf("%d ", a[2]);
    printf("%d ", a[3]);
}
