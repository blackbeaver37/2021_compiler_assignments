void *stringSort(char *string, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        int j;
        for (j = i + 1; j < length; j++)
        {
            char tmp;
            if (*(string + i) > *(string + j))
            {
                tmp = *(string + i);
                *(string + i) = *(string + j);
                *(string + j) = tmp;
            }
        }
    }
}
void main()
{
    char *string;
    int length;
    string = "feagdbc";
    length = 7;
    printf("정렬 전 문자열 : %s\n", string);
    stringSort(string, length);
    printf("정렬 후 문자열 : %s\n", string);
}