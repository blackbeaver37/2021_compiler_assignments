int add(int n1, int n2)
{
    return n1 + n2;
}
int dif(int n1, int n2)
{
    return n1 - n2;
}
void main()
{
    int (*op)(int, int);
    int n1, n2, mode;
    printf("n1 = ");
    scanf("%d", &n1);
    printf("n2 = ");
    scanf("%d", &n2);
    printf("add = 1, dif = 2 : ");
    scanf("%d", &mode);
    if (mode == 1)
        op = &add;
    else if (mode == 2)
        op = &dif;
    else
    {
        printf("wrong operation\n");
        return -1;
    }
    printf("result = %d\n", op(n1, n2));
}