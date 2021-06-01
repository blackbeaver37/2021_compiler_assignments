int main(int argc, int argv[])
{
    enum e
    {
        A = 1,
        // Error No : 18, 81
        B = "2",
        C
    } en;

    struct s
    {
        int a;
        float b;
        // Error No : 84
        int func();
    } st;

    int arr[1]();
}