// Error No : 85
int fun1(int a)(int b)
{
    // Error No : 57
    return "ret";
}

// Error No : 85
int fun2(int a)[1]
{
}

int main(int argc, int argv[])
{
    // Error No : 39
    sizeof(fun1);
}