void ft_rev_int_tab(int *tab, int size)
{
    int start = 0;
    int end = size - 1;
    int tmp;

    while (start < end)
    {
        tmp = tab[start];
        tab[start] = tab[end];
        tab[end] = tmp;

        start++;
        end--;
    }
}

#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 4};
    ft_rev_int_tab(arr, 4);

    for (int i = 0; i < 4; i++)
        printf("%d ", arr[i]);
}
