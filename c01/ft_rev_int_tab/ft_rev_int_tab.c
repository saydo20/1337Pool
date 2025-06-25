void ft_rev_int_tab(int *tab, int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int tmp;
        tmp = tab[start];
        tab[start] = tab[end];
        tab[end] = tmp;
        start++;
        end--;
    }
}

int main(void)
{
    int a[] = {1,2,3,4,5,6};
    ft_rev_int_tab(a, 6);
}