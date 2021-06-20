int det(int *matrix)
{
    int e11, e12, e21, e22;
    e11 = *(matrix + 0);
    e12 = *(matrix + 1);
    e21 = *(matrix + 2);
    e22 = *(matrix + 3);
    return e11 * e22 - e12 * e21;
}
void main()
{
    int *matrix;
    int i, j;
    matrix = (int *)malloc(sizeof(int) * 4);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d x %d 원소 : ", i + 1, j + 1);
            scanf("%d", matrix + i * 2 + j);
        }
    }
    printf("행렬식 : %d\n", det(matrix));
}