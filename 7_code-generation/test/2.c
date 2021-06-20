int add(int n1, int n2)
{
    return n1 + n2;
}
void main()
{
    int a, b;
    a = 1;
    b = 5;
    printf("%d + %d = %d\n", a, b, add(a, b));
}