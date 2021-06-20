int queue[5];
int top;
void push(int n)
{
    top++;
    queue[top] = n;
}
int pop()
{
    --top;
    return queue[top + 1];
}
void list()
{
    printf("queue : ");
    if (top == -1)
        printf("empty");
    else
    {
        int i;
        for (i = 0; i <= top; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    printf("\n\n");
}
void main()
{
    top = -1;
    list();
    printf("push : 1\n");
    push(1);
    list();
    printf("push : 2\n");
    push(2);
    list();
    printf("push : 4\n");
    push(4);
    list();
    printf("pop : %d\n", pop());
    list();
    printf("pop : %d\n", pop());
    list();
}