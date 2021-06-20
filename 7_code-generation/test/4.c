int add(int n1, int n2)
{
    return n1 + n2;
}
void main()
{
    int start, end, sum[2], index;
    start = 1;
    end = 10;
    sum[0] = 0;
    sum[1] = 0;
    index = start;
    while (index <= end)
    {
        sum[index % 2] = add(sum[index % 2], index);
        index++;
    }
    printf("%d부터 %d까지의 짝수들의 합 : %d\n", start, end, sum[0]);
    printf("%d부터 %d까지의 홀수들의 합 : %d\n", start, end, sum[1]);
}