float func(float a)
{
}

int main(int argc, int argv[])
{
    // Error No : 34 & Warning
    func(1, 2, 3);
    // Error No : 35
    func();
    // Error No : 59
    // if (LIT_MAX = 1) Error No : 93
    func("arg");
}