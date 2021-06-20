int add(int n1, int n2)
{
    return n1 + n2;
}
void main()
{
    int start, end, sum, index;
    start = 1;
    end = 10;
    sum = 0;

    for (index = start; index <= end; index++)
    {
        sum = add(sum, index);
    }
    printf("%d부터 %d까지의 합 : %d\n", start, end, sum);
}