float add(float n1, float n2)
{
    return n1 + n2;
}

int main(int argc, int argv[])
{
    struct
    {
        int sum;
        int big;
        int small;
    } * ans;
    int index;

    ans->sum = 0;
    ans->big = 0;
    ans->small = 100;

    for (index = 1; index <= 10; index++)
    {
        ans->sum = (int)add((float)ans->sum, (float)index);
        if (ans->big < index)
            ans->big = index;
        if (ans->small > index)
            ans->small = index;
    }

    printf("sum : %d\nbig : %d\nsmall : %d\n", ans->sum, ans->big, ans->small);
}