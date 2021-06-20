int fibo(int n)
{
    if (n < 1)
    {
        return 0;
    }
    if ((n == 1) || (n == 2))
    {
        return 1;
    }
    return fibo(n - 2) + fibo(n - 1);
}
void main()
{
    int i, target;
    printf("n = ");
    scanf("%d", &target);
    printf("%d번째 피보나치 수 : %d\n", target, fibo(target));
}