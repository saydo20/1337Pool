void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *b = *a;
    *b = tmp;
}


int main(void){
    ft_swap(1,2);
}